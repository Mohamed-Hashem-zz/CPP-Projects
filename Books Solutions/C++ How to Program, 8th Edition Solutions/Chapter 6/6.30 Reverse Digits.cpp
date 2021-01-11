#include <iostream>
using namespace std;
int reverseDigits ( int  );

int main ( )
{
	int num;
	cout << "Enter the Number you want to reverse it :";
	cin >> num;

	int reverseNumber = reverseDigits ( num );

	cout << "\nThe Reverse Number for :" << num << " is :" << reverseNumber << endl;
	
	return 0;
}

int reverseDigits ( int num )
{
	int reverseNumber = 0 , i = 0 , temp = 0 , countDigits = 0 , rem = 0;

	temp = num;

	while ( temp != 0 )
	{
		temp /= 10;
		countDigits++;   // to count the number of Digits in the number.
	}

	temp = num;

	while ( temp != 0 )
	{
		countDigits--;

		rem = temp % 10;

		reverseNumber += ( rem * pow ( 10 , countDigits ) ) ;

		temp /= 10;
	}

	return reverseNumber;
}
