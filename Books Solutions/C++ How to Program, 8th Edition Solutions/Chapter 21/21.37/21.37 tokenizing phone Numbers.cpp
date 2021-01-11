// How To program 8th Edition 
// Number page of problem : 877 , question number : 21.37
//tokenizing phone Numbers

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
	char arr[length]={} , *charPtr = nullptr,fullNum[20]={} ;

	cin.getline(arr,length);

	charPtr = strtok ( arr ,"() -") ;

	while (charPtr != NULL)
	{
		cout<<charPtr << endl;

		strcat(fullNum,charPtr	) ;

		charPtr = strtok (NULL, "() -");
		
	}  

	cout << fullNum << endl;


  return 0;
}