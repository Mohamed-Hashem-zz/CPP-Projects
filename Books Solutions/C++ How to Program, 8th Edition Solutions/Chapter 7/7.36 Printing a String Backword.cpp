#include <iostream>
using namespace std;

const int length = 50;

void stringReverse ( const char *, int  );

int main ( )
{
	char str[length] = "Print this string backwards.";

	cout << "The New String is :";

	int len = strlen ( str );

	stringReverse ( str , len ); // pass the string to the function.

	cout << endl;
	return 0;
}



void stringReverse ( const char *s , int length )
{
	cout << s[length];

	if ( length == 0 )
		return ;

	stringReverse ( s , --length );
}