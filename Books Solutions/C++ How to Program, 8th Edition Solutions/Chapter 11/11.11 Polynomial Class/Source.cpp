#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include "Polynomials.h"

using namespace std;

int main( )
{
	speed ;

	Polynomials p1,p2,p3,p4,p5;
	cin >> p1;
	cout << p1;
	cin >> p2;
	cout << p2;
	p4 = p2 - p1;
	p1 += p2;
	cout << p1;

	p1 -= p2;
	cout << p1;

	p1 *= p2;
	cout << p1;

	p1 *= 2;
	cout << p1;
	cout << ( ( p1 == p2 ) ? "Equal" : "Not Equal" ) << endl;




	cout << endl;
	return 0;
}