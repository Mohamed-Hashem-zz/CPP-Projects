#include "SavingsAccount.h"

SavingsAccount::SavingsAccount ( double money , double rate ) : Account ( money )
{
	if ( rate >= 0.0 )
		interestRate = rate;
	else
		cout << "\aThe intial value is unvalid" << endl;
}

double SavingsAccount::Calcualte_Rate ( double rate )
{
	Account::Balance = Account::getBalance () * rate;

	return Balance;
}

SavingsAccount::~SavingsAccount ()
{
	cout << "The Destructor for the SavingsAccount Class\n";
}
