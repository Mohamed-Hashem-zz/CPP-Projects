#include <iostream>
#include <string>
using namespace std;

template <class T>
int printArray ( const T *arr , int size , int lowSubscript , int highSubscript )
{
	int counter = 0;

	if ( size < 0 || lowSubscript < 0 || highSubscript >= size )
		return 0;

	for ( size_t i = lowSubscript  ; i <= highSubscript ; i++ )
	{
		counter++;
		cout << *( arr + i ) << endl;
	}	

	return counter;
}

int main ( )
{
	int a1[6] = { 1 , 2 , 3 , 4 , 5 , 6 };
	int elements = printArray ( a1 , 6 , 2 , 5 );
	cout << "\nElements were output = " << elements << endl;

	cout << "-------------------------\n";

	string a2[5] = { "Ahmed" , "Mohamed" , "Ayman Hashem","ADASDAS" };
	elements = printArray ( a2 , 5 , 1 , 3 );
	cout << "\nElements were output = " << elements << endl;

	cout << "-------------------------\n";

	double a3[4] = { 1.1 , 1.9 , 2.6 , 3.3 };
	elements = printArray ( a3 , 4 , -1 , 3 );
	cout << "\nElements were output = " << elements << endl;

	cout << "-------------------------\n";

	return 0;
}