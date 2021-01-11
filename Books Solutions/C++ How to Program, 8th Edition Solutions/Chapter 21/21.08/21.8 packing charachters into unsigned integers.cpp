// How To program 8th Edition 
// Number page of problem : 873 , question number : 21.8 
// packing charachters into unsigned integers .  

#include <bits\stdc++.h>
#include <iomanip>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <numeric>
using namespace std;

const int  length = 10;

void displayBits ( int num )
{
	const int Shift = 8 * sizeof( unsigned ) -1  ;
	const unsigned mask = 1 << Shift ;

	for (int i = 1; i <= Shift+1  ; i++)
	{
		cout<<(num & mask ? '1' : '0' );
		num <<= 1 ;

		if(i%8 == 0)
			cout<<" ";

	}

	cout<<"\n ";

}
unsigned back( int num1,int num2)
{
	int result = num1 ;
	result <<= 8 ;
	result |= num2 ;

	return result;

}
int main()
{
	int num1 =  0 , num2 = 0 ; 

	cout << "Enter First num : ";
	cin >> num1;

	cout<<"Enter second num : ";
	cin >> num2;

	cout <<endl;

	displayBits(num1);

	displayBits(num2);

	int result = back(num1,num2);

	cout<<"\n the result  Of Two Number after Shifting \n "<< result << " = " << endl;

	displayBits(result);
	
  return 0;
}
