#include <iostream>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
using namespace std;

int main ( )
{
	cout << fixed << setprecision ( 2 );

	Account account1 ( 50.0 ); // create Account object
	SavingsAccount account2 ( 25.0 , .03 ); // create SavingsAccount object
	CheckingAccount account3 ( 80.0 , 1.0 ); // create CheckingAccount object

	// display initial balance of each object
	cout << "account1 balance: $" << account1.getBalance ( ) << endl;
	cout << "account2 balance: $" << account2.getBalance ( ) << endl;
	cout << "account3 balance: $" << account3.getBalance ( ) << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	cout << "\nAttempting to debit $25.00 from account1." << endl;
	account1.DepitBalance ( 25.0 ); // try to debit $25.00 from account1

	cout << "\nAttempting to debit $30.00 from account2." << endl;
	account2.DepitBalance ( 30.0 ); // try to debit $30.00 from account2

	cout << "\nAttempting to debit $40.00 from account3." << endl;
	account3.DepitBalance ( 40.0 ); // try to debit $40.00 from account3

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	// display balances
	cout << "\naccount1 balance: $" << account1.getBalance ( ) << endl;
	cout << "account2 balance: $" << account2.getBalance ( ) << endl;
	cout << "account3 balance: $" << account3.getBalance ( ) << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	cout << "\nCrediting $40.00 to account1." << endl;
	account1.CreditBalance ( 40.0 ); // credit $40.00 to account1

	cout << "\nCrediting $65.00 to account2." << endl;
	account2.CreditBalance ( 65.0 ); // credit $65.00 to account2

	cout << "\nCrediting $20.00 to account3." << endl;
	account3.CreditBalance ( 20.0 ); // credit $20.00 to account3

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	// display balances
	cout << "\naccount1 balance: $" << account1.getBalance ( ) << endl;
	cout << "account2 balance: $" << account2.getBalance ( ) << endl;
	cout << "account3 balance: $" << account3.getBalance ( ) << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	// add interest to SavingsAccount object account2
	double interestEarned = account2.Calcualte_Rate ( .12);
	cout << "\nAdding $" << interestEarned << " interest to account2." << endl;

	account2.CreditBalance ( interestEarned );

	cout << "\nNew account2 balance: $" << account2.getBalance () << endl;

	cout << "\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";

	return 0;
}