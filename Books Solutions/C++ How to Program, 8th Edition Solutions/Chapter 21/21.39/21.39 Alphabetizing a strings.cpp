// How To program 8th Edition 
// Number page of problem : 877 , question number : 21.39
//Alphabetizing a strings
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
#include <cstdio>

using namespace std;

const int lines = 6;

void bubbleSort(char *arr[] , int lines)
{
	for (int i = 0; i < lines - 1; i++)
	{
		for (int j = 0; j < lines - 1 -i; j++)
		{
			if ( strcmp( arr[j] , arr[j+1] ) > 0 )
				{
					swap(arr[j],arr[j+1]);
			    }

		}

	}

}
int main()
{ 
  
	char *arr[lines]= {"Cairo","Alex","Milano","Aswan", "Luxor", "Madrid" } ;

	bool flag  = false ;

cout << "The original listing of cities: " << endl;

	for (int i = 0; i < lines; i++)
	{
			cout << arr[i] << "\n";
	}

		cout << endl;

	bubbleSort(arr,lines);

	cout<<"=======================================================\n"	 ;

	cout << endl;

	cout << "The alphabetical listing of cities: " << endl;

	for (int i = 0; i < lines; i++)
	{
		 cout<<arr[i]<<"\n";
	}


  return 0;
}
