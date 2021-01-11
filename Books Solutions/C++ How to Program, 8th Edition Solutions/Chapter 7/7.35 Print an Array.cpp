#include <iostream>
using namespace std;
const int length = 10;

void printArray ( int[] , int , int );
int main ( )
{
	int arr[length] = { 0 } , low = 0;

	for ( size_t i = 0; i < length; i++ )
	{
		arr[i] = rand () % 12;
		cout << i + 1 << " - Enter Element :" << arr[i] << endl;
	}

	cout << "The array is :";

	printArray ( arr , length , low);

	cout << endl;
	return 0;
}

void printArray ( int arr[] , int lenght , int low )
{
	if ( low == lenght )
		return ;

	cout << arr[low] << " ";

	printArray ( arr , lenght , ++low );
}