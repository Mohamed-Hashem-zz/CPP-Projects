#include "Account.h"

Account::Account ( double amount ) :Balance ( 0 ) { setBalance ( amount ); }

void Account::setBalance ( double amount )
{
	if ( amount >= 0 )
		Balance = amount;
	else
	{
		Balance = 0;
		cout << "\aThe intial Value to Balance is invalid" << endl ;
	}
}

void Account::CreditBalance ( double amount ) { Balance += amount; }

bool Account::DepitBalance ( double amount )
{
	if ( amount <= getBalance ( ) && amount >= 0 )
	{
		Balance -= amount;
		return true;
	}
	else
	{
		Balance = 0;
		cout << "\aDepit amount exceeded account balance || Depit amount is invalid Value" << endl ;
		return false;
	}
}

double Account::getBalance () { return Balance; }

Account::~Account ()
{
	cout << "The Destructor for the Account Class\n";
}
