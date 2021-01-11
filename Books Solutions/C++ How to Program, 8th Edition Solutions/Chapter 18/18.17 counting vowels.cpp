// How To program 8th Edition 
// Number page of problem : 753 , question number : 18.17
// counting vowels
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

int vowels ( string );

const int  length = 10;

int main()
{ 
		string str;

		getline(cin , str);

		cout <<  vowels (str) << endl;

		cout<<endl;

  return 0;
}

int vowels (string str)
{
	int i = 0 , count = 0 ;

	while ( str[i] != '\0' )
	{
		str[i] = tolower( str.at(i)	);

		if ( str[i] == 'a'||str[i] == 'e' || str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
			count += 1; 

		i++;
	}


	// another Solution 

	/*
		string :: const_iterator iterator = str.begin();

		//while ( iterator != str.end() )
		//{
		//	if ( *iterator == 'a'||*iterator == 'e' || *iterator == 'i'||*iterator == 'o'||*iterator == 'u')
		//			count += 1;

		//	*iterator++;

		}
	*/

	return count ;
}

