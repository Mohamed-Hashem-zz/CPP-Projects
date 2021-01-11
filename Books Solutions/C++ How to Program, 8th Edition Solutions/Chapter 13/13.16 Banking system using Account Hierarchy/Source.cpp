#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main ( )
{
	cout << fixed << setprecision ( 2 );

	SavingsAccount *account1 = new SavingsAccount ( 50.0 , 0.8 ); // create Account object
	CheckingAccount *account2 =new CheckingAccount ( 80.0 , 0.2 ); // create CheckingAccount object

	Account *accounts[3] = { account1 , account2 };

	// display initial balance of each object
	for ( size_t i = 0; i < 2; i++ )
		cout << "account balance: $" << accounts[i]->getBalance () << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	cout << "\nAttempting to debit $25.00 to every account" << endl;

	for ( size_t i = 0; i < 2; i++ )
		accounts[i]->DepitBalance ( 25.0 );

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

	// display balances
	for ( size_t i = 0; i < 2; i++ )
		cout << "account balance: $" << accounts[i]->getBalance ( ) << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
	
	cout << "\nCrediting $40.00 to accounts." << endl;

	for ( size_t i = 0; i < 2; i++ )
		accounts[i]->CreditBalance ( 40.0 );

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\n";

	// display new balances
	for ( size_t i = 0; i < 2; i++ )
		cout << "account balance: $" << accounts[i]->getBalance ( ) << endl;// display balances

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	// add interest to SavingsAccount object account1 and account2

	double interestEarned1 = account1->Calcualte_Rate ( .12);
	
	cout << "\nAdding $" << interestEarned1 << " interest to account2." << endl;

	account1->CreditBalance ( interestEarned1);

	cout << "\nNew account1 balance: $" << account1->getBalance () << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	for ( size_t i = 0; i < 2; i++ )
	{
		delete accounts[i];
	}

	return 0;
}