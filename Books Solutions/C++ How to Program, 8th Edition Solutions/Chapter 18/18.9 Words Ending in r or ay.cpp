// How To program 8th Edition 
// Number page of problem : 752 , question number : 18.9
// Words Ending in "r" or "ay"

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

int main()

{ 
	string str[length];
		
	for (int i = 0; i < length; i++)
	{	cout << i+1 << "Enter a string : " ;
		getline (cin,str[i]);
	} 
		
	cout << endl;

	for (int i = 0; i < length; i++)
	{
		if( str[i].substr(str[i].length() - 1 ) == "r" || str[i].substr(str[i].length() - 2 ) == "ay")
			cout << " The Valid String is : " , cout <<str[i] << endl;

	}



		   cout << endl;

	return 0;
}