 // How To program 8th Edition 
// Number page of problem : 753 , question number : 18.22
//Reversing a string with Iterators using Recursion

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

void reverseString (string &str);

int main()
{ 
  
	string  str;
	
	getline (cin,str  );

	 reverseString (str ) ;

	cout << endl;

  return 0;
}

void  reverseString (string &str)
{
		static string :: const_reverse_iterator iterator = str.rbegin();

	if (iterator == str.rend() )
		return ; 
			cout << *(iterator++);	

		 reverseString(str)	;

}