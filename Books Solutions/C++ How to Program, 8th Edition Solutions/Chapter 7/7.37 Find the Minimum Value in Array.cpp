#include <iostream>
using namespace std;

const int length = 10;

int minValue = 0;

int minimumValue ( int[] , int , int );

int main ( )
{

	int arr[length] , i = 0 ;

	for ( size_t i = 0; i < length; i++ )
	{
		cout << "Enter Element :";
		cin >> arr[i];
	}

	int min = minimumValue ( arr , length - 1 , i );
	
	cout << "\nThe Minimum Value in the array is : " << min << endl;

	return 0;
}

int minimumValue ( int arr[] , int length , int i )
{
		if ( length == i )
			return arr[i];
		
		 minValue = minimumValue ( arr , length , ++i );

		return  ( minValue < arr[i] ) ? minValue : arr[i];
}