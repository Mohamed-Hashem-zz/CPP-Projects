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
	char arr[length];
	int counter = 1;

	cin.getline(arr,length);

	int len = strlen(arr);

	for (int i = 0; i < len ; i++)
	{	
			counter = 1;
		for (int j = i+1 ; j < len ; j++)
		{
			if( arr[i] == arr[j] )
				{
					counter++;
					arr[j] = '.';
				}
		}

		if (arr[i] != '.' && arr[i] != ' ' ) 
		cout<<arr[i]<<"  " << counter<<endl;

			
	}			 





	cout<<endl;

  return 0;
}