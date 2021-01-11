// How To program 8th Edition 
// Number page of problem : 177 , question number : 4.14 
// Credit limits 

#include <iostream>

using namespace std;

int main ()
{
	 unsigned int accNum=1; // Account Number 
	 double balance=0; // The Balance in the beginning of the month
	 double totalCharges=0; // the all items charged by customer this month
	 double totalCredits=0; // total all credits applied by the customer this month
	 double newBalance =0;   // New Balance of the month
	 double creditLimit=0; // credit limit 

while (true)
{		
	cout << "Enter Account number or (-1 to quit ) : ";

	cin>>accNum;

	if(accNum != -1)
	{
		cout<<"Enter Beginning balance : ";
		cin>>balance;

		cout<<"Enter total charges : ";
		cin>>totalCharges;

		cout<<"Enter total Credits : ";
		cin>>totalCredits;

		cout<<"Enter Credit limit : ";
		cin>>creditLimit;

		newBalance = balance + totalCharges - totalCredits;

		cout << "New Balance is " << newBalance << endl;

		if(newBalance > creditLimit)
			{
				cout<<"Account : " << accNum<<endl;

				cout<<"Credit Limit : " << creditLimit<<endl;

				cout<<"Balance : " << newBalance<<endl;

				cout<<"Credit limit Exceeded. "<<endl;
			}
		else 
			cout<<endl;

	}
	else
		break;


}

	return 0;
}

