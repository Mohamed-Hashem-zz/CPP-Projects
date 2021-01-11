#include <iostream>
using namespace std;

int main( )
{
	int num = 0 , n1 = 0 , n2 = 0 , n3 = 0 , n4 = 0 , n5 = 0;

	cin >> num;
	
	n1 = ( num / 10000 );        // to hold the digit number 5 
	n2 = ( num / 1000 ) % 10;    // to hold the digit number 4
	n3 = ( num / 100 ) % 10;     // to hold the digit number 3
	n4 = ( num / 10 ) % 10;      // to hold the digit number 2
	n5 = num % 10 ;              // to hold the digit number 1

	cout << n5 << " " << n4 << " " << n3 << " " << n2 << " " << n1 << endl;

	return 0;
}