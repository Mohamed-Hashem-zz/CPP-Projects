// How To program 8th Edition 
// Number page of problem : 183 , question number : 4.35
// Enforcing privacy with cryptrography part of decryption ( part 2 )

#include <iostream>

using namespace std;

int main()
{
	int num,reminder1=0,reminder2=0,reminder3=0,reminder4=0;

	cout << " Enter four Numbers to decrypte : "; 
	cin>>num;

	reminder1= ( ( num % 10 ) + 3 ) % 10 ;
	reminder2 = ( ( ( num / 10 ) % 10 ) + 3 ) % 10 ;
	reminder3 = ( ( ( num /100 ) % 10)  + 3 ) % 10 ;
	reminder4 = ( ( ( num /1000) % 10 ) + 3 ) % 10 ;

	int temp1 = reminder1 ; // I defined temp to replace first digit with the third difit 
	reminder1=reminder3;
	reminder3 = temp1;

	int temp2 = reminder2; // I defined temp to replace second digit with the forth digit 
	reminder2 = reminder4;
	reminder4 = temp2;

	cout << " The Decrypted Numbers : " << reminder4 << reminder3 << reminder2 << reminder1 << endl;

  return 0;
  }