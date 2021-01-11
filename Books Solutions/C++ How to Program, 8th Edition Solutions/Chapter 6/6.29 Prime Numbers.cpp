#include <iostream>
using namespace std;

bool isPrime ( int );

void print_Prime_Numbers ();

int main ( )
{
	print_Prime_Numbers ();

	cout << endl;
	return 0;
}

bool isPrime ( int num )
{
	bool flag = false;

	for ( size_t i = 2; i <= sqrt ( num ); i++ )
	{
		if ( num%i == 0 )
			return false; // determines that the number is not prime 
	}

	return true; // determines that the number is prime 
}

void print_Prime_Numbers ()
{
	int counter = 0 ;

	cout << "The Prime Numbers between 2 and 10000 is: \n";

	for ( size_t i = 2; i <= 10000 ; i++ )
	{
		if ( isPrime ( i ) )
		{
			cout << i << '\t';
			counter++;

			if ( counter % 10 == 0 )
				cout << endl;
		}
	}
}