// How To program 8th Edition 
// Number page of problem : 875 , question number : 21.34
// Randomly creating sentences.

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

const int  length = 5;

const char* SPACE = " ";

char *article[length] = { "the", "a", "one", "some", "any" };
char *noun[length] = { "boy", "girl", "dog", "town", "car" };
char *verb[length] = { "drove", "jumped", "ran", "walked", "skipped" };
char *preposition[length] = { "to", "from", "over", "under", "on" };

char sentence[50] ;


int main()
{ 	
	srand (time(NULL) );

	for (int i = 0; i < 20; i++)
	{
		strcat ( sentence,article[ rand() % length ] );
		strcat (sentence , SPACE);

		strcat ( sentence,noun[ rand() % length] );
		strcat (sentence , SPACE);

		strcat ( sentence,verb[  rand() % length ] );
		strcat (sentence , SPACE);

		strcat ( sentence,preposition[  rand() % length ] );
		strcat (sentence , SPACE);

		strcat ( sentence,article[  rand() % length ] );
		strcat (sentence , SPACE);

		strcat ( sentence,noun[rand() % length] );
		strcat (sentence , SPACE);

		strcat(sentence , "." );
		
		sentence[0] = toupper(sentence[0]);

		cout<<sentence << endl;

		sentence[0]='\0';

	}




  return 0;
}