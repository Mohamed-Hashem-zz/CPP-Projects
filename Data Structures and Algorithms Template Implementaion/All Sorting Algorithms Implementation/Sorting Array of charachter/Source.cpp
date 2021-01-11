// Sorting Array of charachter

#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

const int length = 20;
int main()
{
	char arr[length]= "\0";

	cin.getline(arr,length);

	sort(arr,arr+strlen(arr) ); //sort Array 

	  int k = 1;

	  for (int i = 0; i < strlen (arr); i++)
		{
			if( *(arr+i) == *(arr+k) && *(arr+i) != ' ')
				cout<<*(arr+i);
			else if ( *(arr+i) != *(arr + k) && *(arr+i) != ' ' )
				cout<< *(arr+i) << " ";
			k++;
		}

   return 0;
}

