#include <iostream>
using namespace std;

const int length = 10;

void selctionSort ( int [] , int );
void displayArray ( int [] , int );
void swap ( int & , int & );

int main ( )
{
	int arr[length] = { 0 };

	for ( size_t i = 0; i < length; i++ )
	{
		cout << i + 1 << "- Enter Valid Element :" ;
		cin >> arr[i];
	}

	selctionSort ( arr , length );

	cout << "\nThe Array after Sorting is :";
	displayArray ( arr , length );

	cout << endl;
	return 0;
}

void selctionSort ( int arr[] , int length )
{
	static int i = 0;

	if ( i ==  length  )
		return ;

		for ( size_t j = 0; j < length; j++ )
		{
			if ( arr[i] < arr[j] )
				swap ( arr[i] , arr[j] );
		}
		   i++;

		selctionSort ( arr , length );
}

void swap ( int & x , int & y )
{
	int temp = x ;
	x = y;
	y = temp;
}

void displayArray ( int arr[] , int length )
{
	for ( size_t i = 0; i < length; i++ )
		cout << arr[i] << " ";
}