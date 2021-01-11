#include <iostream>
using namespace std;

int countSeconds( int , int , int );

int main( )
{
	int hours , mins , sec;

	cout << "Enter Hours :";
	cin >> hours;

	cout << "Enter Minutes :";
	cin >> mins;

	cout << "Enter Seconds:";
	cin >> sec;
	
	int count = countSeconds( hours , mins , sec );

	cout << "The count of Seconds :" << count << endl;

	return 0;
}

int countSeconds ( int hours , int minutes , int seconds )
{
	int counter = 0 ;
	hours = ( hours < 12 ) ? hours : hours - 12;

	for ( size_t i = hours ; i < 12; i++ )
	{
		for ( size_t j = minutes ; j < 60; j++ )
		{
			for ( size_t k = seconds; k < 60; k++ )
			{
				counter += 1;
			}
			  seconds = 0;
		}
		  minutes = 0;
	}

	return counter;
}