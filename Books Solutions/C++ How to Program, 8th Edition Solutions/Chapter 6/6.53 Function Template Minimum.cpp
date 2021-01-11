#include <iostream>
using namespace std;

template < typename T>
inline T minimumNumber ( T n1 , T n2 )  { return ( n1 < n2 ) ? n1 : n2 ; }

int main ( )
{

	char x , y , z;

	cout << "Enter First Value:";
	cin >> x;

	cout << "Enter Second Value:";
	cin >> y;

	z = minimumNumber ( x , y );

	cout << "\nThe Minimum Value is :" << z << endl;

	return 0;
}