// How To program 8th Edition 
// Number page of problem : 183 , question number : 4.35
// Enforcing privacy with cryptrography part of encryption ( part 1 )

#include <iostream>

using namespace std;

int main()
{
	int num;
	cout << " Enter four Numbers to encrypte : "; 
	cin>>num;

	int reminder1 = ( (num%10) +7 ) % 10; // to catch the first digit 
	int reminder2 =( ( (num/10) % 10 ) + 7 ) % 10 ; // to catch the second digit
	int reminder3 =( ( (num /100) % 10)+7 ) % 10 ; // to catch the third digit
	int reminder4 = ( ( (num/1000) % 10 ) +7 ) % 10 ; // to catch the firth digit

	int temp1 = reminder1 ; // I defined temp to replace first digit with the third difit 
	reminder1=reminder3;
	reminder3 = temp1;

	int temp2 = reminder2; // I defined temp to replace second digit with the forth digit 
	reminder2 = reminder4;
	reminder4 = temp2;

	cout << " The encrypted Numbers : " <<  reminder4 << reminder3 << reminder2 << reminder1 << endl;


  return 0;
  }