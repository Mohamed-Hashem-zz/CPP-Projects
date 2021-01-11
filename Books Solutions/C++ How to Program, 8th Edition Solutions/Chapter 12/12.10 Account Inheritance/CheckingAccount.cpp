#include "CheckingAccount.h"

CheckingAccount::CheckingAccount ( double balance , double fee ) :Account ( balance )
{
	if ( fee >= 0 )
		Fee_Per_Transaction = fee;
	else
		cout << "\aTransaction fee must be >= 0.0" << endl;
}

void CheckingAccount::CreditBalance ( double amount )
{
	Account::CreditBalance ( amount );
	changeFee ();
}

bool CheckingAccount::DepitBalance ( double amount )
{
	bool success = Account::DepitBalance ( amount );

	if ( success )
	{
		changeFee ();
		return true;
	}
	else
		return false;
}

void CheckingAccount::changeFee () { Account::setBalance ( getBalance () - Fee_Per_Transaction ); }

CheckingAccount::~CheckingAccount ()
{
	cout << "The Destructor for the CheckingAccount Class\n";
}
