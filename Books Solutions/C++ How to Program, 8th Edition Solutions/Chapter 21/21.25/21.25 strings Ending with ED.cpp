// How To program 8th Edition 
// Number page of problem : 875 , question number : 21.25
// strings Ending with ED

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
const int  lines = 4;

void cinData (char arr[lines][length])
{
	for (int i = 0; i < lines; i++)
	{
		cout<<"Enter The Strings : ";
		cin.getline( &arr[i][0],length);
	}

}

void searchingData ( char arr[lines][length],char searchKey )
{
	cinData(arr);
	int lenString = 0;

	for (int i = 0; i < length; i++)
	{
		lenString = strlen(& arr[i][0]);
		

		if (strcmp ( &arr[i][lenString-2] ,"ed") == 0 )
		{	
			cout << " The String which end with '\ ED '\ is : ";
			cout<< &arr[i][0] <<endl;

		}

	}

}

int main()
{ 
	char array[lines][length] = {} ,searchkey= 'ed' ;

	searchingData(array , searchkey );

	cout<<endl;

  return 0;
}