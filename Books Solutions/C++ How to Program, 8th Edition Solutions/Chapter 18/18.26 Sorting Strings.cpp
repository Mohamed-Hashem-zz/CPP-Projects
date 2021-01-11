// How To program 8th Edition 
// Number page of problem : 754 , question number : 18.26
//Sorting Strings

#include <iostream>
#include <algorithm>
#include <functional>
#include <iomanip>	
#include <bitset>	
#include <string>	
#include <cctype> 	
#include <cmath> 	
#include <cstdlib>	
#include <ctime>
#include <cstdio>

using namespace std;

const int  length = 5;

void selctionSort(string str[length] );

int main()
{ 
	string str[length];

	for (int i = 0; i < length; i++)
	{	
		cout <<"Enter The unsorted String Num " << i+1 <<" : " ;
		   cin >> str[i];
	}

	selctionSort(str);


  return 0;
}
void selctionSort(string str[length] )
{

	 for (int i = 0; i < length; i++)
	{
	
	for (int j = 0; j < str[i].length(); j++)
		{
			if (str[i] < str[j] )
				str[i].swap(str[j]);
		}
	}

	 cout << "\n ------------------------------ " << endl;

	 		for (int i = 0; i < length; i++)
		{
			cout <<"The sorted String Num " << i+1 <<" : " ;
			cout << str[i] << endl;
		}

	cout << endl;
}