// How To program 8th Edition 
// Number page of problem : 880 , question number : 21.48
// morse code

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
#include <cstdio>

using namespace std;

const int  length = 40;

char  arrOfChar[length] = "abcdefghijklmnopqrstuvwqyz";

char  *morseCode[length] = { ".-","-...","-.-.","-..", ".", "..-.", "--.","....", "..", ".---", "-.-",
".-..", "--","-.", "---", ".--.", "--.-", ".-.", "...", "-","..-", "...-", ".--",
"-..-", "-.--", "--.." } ;

int main()
{ 
	char arr[length] = {};

	cout<<"Enter Your String : ";

	cin.getline(arr,length);

	 cout << "\n";

	for (int i = 0; i < strlen(arr); i++)	{		for (int j = 0; j < length; j++)		{			if(arr[i] == arrOfChar[j]  ) 				cout << morseCode[j] << "  ";		}			}	cout << "\n \n" ;

  return 0;
}