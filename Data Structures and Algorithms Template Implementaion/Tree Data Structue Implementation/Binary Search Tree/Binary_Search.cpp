#include "Binary_Search.h"


Binary_Search::Binary_Search(int size)
{
	this->Size = ( size > 0 ) ? size : 10;
	
	srand( time( 0 ) );

	for( size_t i = 0; i < Size; i++ )
		arr.push_back( 10 + rand() % 90 );

	sort( arr.begin() , arr.end() );

	DisplayElements();
}
int Binary_Search::binarySearch( int searchKey)
{
	int  Position = -1;
	int low = 0;
	int high = Size - 1;
	int middel = ( ( low + high +1 ) / 2 );
	do
	{
		Display_SubarrayElements( low , high );

		for( size_t i = 0; i < middel; i++ )
			cout << "   ";

		cout << " * " << endl;

		if( searchKey == arr[middel] )
			Position = middel;
		else if( searchKey > arr[middel] )
			low = middel + 1;
		else 
			high = middel - 1;
	
		middel = ( ( low + high + 1 ) / 2 );
	} while( low <= high && Position == -1 );

	return Position;
}

void Binary_Search::DisplayElements()
{
	Display_SubarrayElements( 0 , Size - 1 );
}

void Binary_Search::Display_SubarrayElements( int low , int high )
{
	for( size_t i = 0; i < low; i++ )
		cout << "   ";
	
	for( size_t i = low; i <= high; i++ )
		cout << arr[i] << " ";

	cout << endl;
}

Binary_Search::~Binary_Search()
{
}
