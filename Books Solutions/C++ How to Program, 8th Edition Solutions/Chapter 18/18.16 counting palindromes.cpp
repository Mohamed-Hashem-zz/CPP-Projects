// How To program 8th Edition 
// Number page of problem : 753 , question number : 18.16
// counting palindromes

#include <iostream>
#include <sstream>
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

 static bool ispalin (string word )	 ;

 int checkPalin( string &word);

const int  length = 10;

int main()
{ 
  
	  string str1;
	  
	  int count  = 0 ;

	cout << "Enter The Streem of String : ";
	  getline(cin , str1 );
	  
	  cout << "The Number of Palindormes : ";

	cout <<  checkPalin (str1)<< endl; 
		
  return 0;
}



static bool ispalin (string word )
{
	int n = word.length();

	for (int i = 0; i < n ; i++ ,n--)
	{	
		word.at(i) = tolower( word.at(i) );

		if(word.at(i) != word.at(n-1)  )
			return false ;
	}
	return true ;
}

int checkPalin( string &word)
{
		 stringstream ss (word);

		 int total =  0; 

		 while ( getline (ss,word,' ') )
		 {
			 total += ( ( ispalin(word) ) ? 1 : 0 ) ; 
		 }

		 return total;
}
