#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

const int length = 50;

bool palindormes ( char *s )
{
	int k = strlen(s)  - 1; // because the string treats as array , the last element is garbage.

	for ( size_t i = 0; i < strlen ( s ) / 2 ; i++ , k-- )
	{
		if ( s[i] != s[k] )
			return false;
	}
     	return true;
}

int main ( )
{
	char str[length];
	
	cin.getline ( str , length );

	cout << ( palindormes ( str ) ? "Array of charachters are Palindormes" : "Array of charachters are not Palindormes" ) << endl;

	return 0;
}