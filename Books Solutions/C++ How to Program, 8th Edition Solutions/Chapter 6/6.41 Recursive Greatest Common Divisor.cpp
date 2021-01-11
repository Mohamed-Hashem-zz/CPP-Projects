#include <iostream>
using namespace std;

int GCD ( int num1 , int num2 )
{
	return num2 == 0 ? num1 : GCD ( num2 , num1 % num2 );
}

int main ( )
{
	int x , y;

	cout << "Enter Two Number :";
	cin >> x >> y;

	if ( x < y )
	{
		int temp = x ;
		x = y;
		y = temp;
	}

	int gcd = GCD ( x , y );
	cout << "The Greatest Common Divisor is : " << gcd << endl;

	return 0;
}