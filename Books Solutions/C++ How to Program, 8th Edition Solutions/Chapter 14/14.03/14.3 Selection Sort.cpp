#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

template <class T>
void Swap ( T & , T & );

template <class T>
void SelectionSort ( T *arr , int size );

int main ( )
{
	srand ( time ( 0 ) );

	const int size = 5;

	int arr[size] = { };

	cout << "The Array before Swap : ";

	for ( size_t i = 0; i < size; i++ )
	{
		arr[i] = rand () % 10;
		cout << arr[i] << " ";
	}
	
	SelectionSort ( arr , size );
	
	cout << "\n\nThe array after  Swap : ";
	for ( size_t i = 0; i < size; i++ )
		cout << arr[i] << " ";

	cout << "\n---------------------------------------------------------\n";
	
	string str[size] = { "tharwat" , "Ahmed" , "Mohamed" , "bahaa" , "Aymam" };

	cout << "The Array before Swap : ";
	for ( size_t i = 0; i < size; i++ )
		cout << str[i] << " ";

	SelectionSort ( str , size );

	cout << "\n\nThe array after  Swap : ";
	for ( size_t i = 0; i < size; i++ )
		cout << str[i] << " ";

	cout << "\n---------------------------------------------------------\n";

	return 0;
}

template <class T>
void SelectionSort ( T *arr , int length )
{
	for ( size_t i = 0; i < length; i++ )
	{
		for ( size_t j = i; j < length ; j++ )
		{
			if ( arr[i] > arr[j] )
				Swap ( arr[i] , arr[j] );
		}
	}
}

template <class T>
void Swap ( T & n1 , T & n2 )
{
	T temp = n1;
	n1 = n2;
	n2 = temp;
}