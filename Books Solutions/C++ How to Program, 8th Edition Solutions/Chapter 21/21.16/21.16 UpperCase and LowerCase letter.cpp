// How To program 8th Edition 
// Number page of problem : 875 , question number : 21.16
// convert to UpperCase and LowerCase letter

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

int main()
{ 
  
	char arr[length] = {};

	cout<< "Enter the Sentence : " ;
	cin.getline(arr,length);

	cout<<"Upper Charachter : ";

	for (int i = 0;  i < strlen(arr) ; i++)
	{
		cout.put ( static_cast <char> ( toupper(arr[i]) ) );

	}

	cout <<endl;

		cout<<"Lower Charachter : ";

		for (int i = 0 ; i < strlen(arr); i++)
	{
		cout.put  ( static_cast<char> ( tolower(arr[i]) ) );

	}


	   cout<<endl;


	cout<<endl;

  return 0;
}