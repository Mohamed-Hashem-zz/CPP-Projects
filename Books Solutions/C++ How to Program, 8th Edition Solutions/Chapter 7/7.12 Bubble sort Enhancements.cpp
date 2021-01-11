#include <iostream>
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

		cout << "Pass Number " << i + 1 << " :\t";
		for ( size_t i = 0; i < size; i++ )
			cout << arr[i] << " ";

		cout << endl;
	}
}

void swap ( int &x , int &y )
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

	cout << "\nThe Array before Sorting is :\n";

	for ( size_t i = 0; i < size; i++ )
		cout << arr[i] << " ";
	
	cout << endl;

	BubbleSort ( arr , size );

	cout << "\nThe Array After Sorting is :";

	for ( size_t i = 0; i < size; i++ )
	{
		cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}