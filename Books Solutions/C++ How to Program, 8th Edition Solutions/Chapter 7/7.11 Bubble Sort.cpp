#include <iostream>
#include <time.h>
using namespace std;
void swap ( int & , int & );

const int size = 10;

void BubbleSort ( int arr[] , int size )
{
	for ( size_t i = 0; i < size; i++ )
	{
		for ( size_t j = 0; j < size - i - 1 ; j++ )
		{
			if ( arr[j] > arr[j + 1] )
				swap ( arr[j] , arr[j + 1] );
		}
	}
}

void swap ( int &x , int &y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main ( )
{
	int arr[size] = { 0 };
	
	for ( size_t i = 0; i < size; i++ )
	{
		cout << i + 1 << "- Enter Array Numbers: ";
		cin >> arr[i];
	}

	BubbleSort ( arr , size );

	cout << "\nThe Sorted Array is :";

	for ( size_t i = 0; i < size; i++ )
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}