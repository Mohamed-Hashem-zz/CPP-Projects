// Given an array of Charachter and print all sub-strings 

#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int length = 10;

int main()
{ 
  
	char str[length]="\0";

	cin>>str;

	
	for (int i =0; i < strlen(str); i++)
	{
		for (int j = 0; j <  strlen(str) -i ; j++)
		{
			int z = i + j ;

			for (int k = i; k <= z ; k++)
			{
				cout<<str[k];
			}

			cout<<" ";
		}

		cout<<endl;
	}


  return 0;
}