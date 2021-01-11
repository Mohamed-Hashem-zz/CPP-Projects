#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int length = 20;
static int i = 0 ;

int linearSearch ( int[] , int , int );

int main ( )
{
	int arr[length] , keySearch = 0 , location = 0;

	for ( size_t i = 0; i < length; i++ )
	{
		cout << i + 1 << " - Enter Element: " ;
		cin >> arr[i];
	}

	cout << "\nEnter The Key Search u search him :";
	cin >> keySearch;

	location = linearSearch ( arr , length , keySearch );

	if ( location != -1 )
		cout << "\nThe key Search " << keySearch << " has been found in the Array in the Location : " << location ;
	else
		cout << -1 ;

	cout << endl;

	return 0;
}

int linearSearch ( int arr[] , int length , int searchKey )
{
	if ( length == 0 && searchKey != arr[length] )
		return -1;

	if ( searchKey == arr[length] ) { return length; }

	linearSearch ( arr , --length , searchKey );
}