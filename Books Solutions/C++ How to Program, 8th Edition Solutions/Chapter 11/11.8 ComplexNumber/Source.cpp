#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include "complexNumbers.h"
using namespace std;

int main( )
{
	speed ;
	complexNumbers n1 , n2 , sumtion , subtruct , multiply, assignment;

	cout << "Enter first object\n";
	cin >> n1;
	cout << n1;

	cout << "Enter Second object:\n";
	cin >> n2;
	cout << n2;
	
	cout << "The Multiplication of two Complex Number\n";
	multiply = n1 * n2;
	cout << multiply;

	cout << "The Sumtion of two Complex Number\n";
	sumtion = n1 + n2;
	cout << sumtion;
	
	cout << "The subtrction of two Complex Number\n";
	subtruct = n1 - n2;
	cout << subtruct;
	
	cout << "The assignment of Number\n";
	assignment = n2;
	cout << assignment;
	
	cout << "The Comprison using == operators :";
	cout << ( ( n1 == n2 ) ? "The Two Number are equal" : "The Two Number are not equal" ) << endl;

	cout << "The Comprison using != operators :";
	cout << ( ( n1 != n2 ) ? "The Two Number are not equal" : "The Two Number are equal" ) << endl;

	cout << endl;
	return 0;
}