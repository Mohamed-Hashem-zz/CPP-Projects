#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include <iostream>
#include <string>
#include "hugeInt.h"

using namespace std;

int main()
{
	speed;

	hugeInt n1( 100 ) ;
	hugeInt n2( 400 ) , n3( "555" ) , n4;

	cout << "n1 =" << n1 << endl;
	cout << "n2 =" << n2 << endl;
	cout << "n3 =" << n3 << endl;
	cout << "n4 =" << n4 << endl;

	return 0;
}