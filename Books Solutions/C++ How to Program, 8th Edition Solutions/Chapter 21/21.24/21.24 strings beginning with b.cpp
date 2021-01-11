// How To program 8th Edition 
// Number page of problem : 875 , question number : 21.24
// strings beginning with b

#include <bits\stdc++.h>
#include <algorithm>	
#include <iostream>
#include <iomanip>	
#include <bitset>	
#include <string>	
#include <cctype> 	
#include <cmath> 	
#include <cstdlib>	
#include <ctime>


using namespace std;

const int  length = 20;

const int size = 4 ;
void enteringData( char arr[size][length])
{
	for (int i = 0; i < size ; i++)
	{
		cout<<"Enter The String : ";

		cin.getline( &arr[i][0] , length);
	}	
}


void SearchKey ( char arr[size][length] , char searchKey , char *ptr)
{
		int counter = 0 ;

		enteringData(arr);

	for (int i = 0; i < 4; i++)
	{
		if( arr[i][0] == searchKey )
		{
			cout << &arr[i][0] << endl;
		}

	}
}

int main()
{ 
	char arr[size][length] = {0}, searchKey = 'b' , *ptr = nullptr ;

	SearchKey ( arr , searchKey , ptr );



  






	cout<<endl;

  return 0;
}