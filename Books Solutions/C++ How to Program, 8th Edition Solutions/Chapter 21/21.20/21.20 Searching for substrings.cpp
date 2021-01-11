// How To program 8th Edition 
// Number page of problem : 875 , question number : 21.20
// Searching for substrings

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

const int  length = 100;

void enteringData( char arr[length] , char searchKey[10] )
{
	
	cin.getline(arr,length,'#');

	for (int i = 0; i < strlen(arr); i++)
		{
			static_cast <char> ( tolower( arr[i] ) ) ;
		}

	cin.clear();

	cin >> searchKey ;

	for (int i = 0; i < strlen(searchKey); i++)
		{
			 static_cast <char> ( tolower( searchKey[i] ) )  ;
		}

}


void SearchKey ( char arr[length] , char searchKey[10] , char *ptr)
{
	enteringData(arr,searchKey);

	ptr = strstr(arr,searchKey);

	  int counter = 0 ;

	while  ( ptr = strstr( ptr,searchKey) )
	{
			counter++;
			ptr++;
	}

	if ( counter )
	{
		cout<<"The number of the searchkey : " << searchKey <<" is : " << counter << endl;
	}
	else 
		cout<<"Not Found " <<endl;
}

int main()
{ 
	char arr[length] = {}, searchKey[10] , *ptr = nullptr ;

	SearchKey ( arr , searchKey , ptr );



  






	cout<<endl;

  return 0;
}