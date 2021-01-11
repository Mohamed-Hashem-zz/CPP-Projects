#include <iostream>
using namespace std;

const int length = 20;

void DublicateArray ( int arr1[] )
{
	int arr2[length] = { 0 } , position = 0 ;

	bool flag = false;

	for (int i = 0; i < length; i++ )
	{
		flag = false;

		for ( int j = i + 1; j < length; j++ )
		{
			if ( arr1[i] == arr1[j] )
			{
				flag = true;
				break;
			}
		}

		if ( !flag )
		  arr2[position++] = arr1[i];		  
	}
	
	cout << "\nThe Array after deleting the Dublicate Elements is:";

	for ( size_t i = 0; i < position; i++ )
	{
		cout << arr2[i] << " ";
	}
}

int main ( )
{
	int arr[length] = { 0 };

	for ( size_t i = 0; i < length; i++ )
	{
		cout << "Enter Array Elements between (10-100) : ";
		cin >> arr[i];
	}

	DublicateArray ( arr );

	cout << endl;
	return 0;
}