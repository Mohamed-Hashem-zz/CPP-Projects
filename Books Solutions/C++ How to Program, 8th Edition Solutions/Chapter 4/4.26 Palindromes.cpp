// How To program 8th Edition 
// Number page of problem : 181 , question number : 4.26
// Palindromes 
 // Palindromes is numbers his first and fifth digit are same and second and forth digit are same as 12321 - 46865 ...

#include <iostream>
using namespace std;
int main()
{
	int num , reminder1 =1 , reminder2 =1 , remindee3=1 , reminder4=1;

	cout<<" Enter Number between 10000 and 99999  : ";
cin >> num;

	reminder1 = num%10;				// first number
	reminder2=(num/10) %10;			// second number 
	remindee3 = (num/1000) %10;		// forth number 	
	reminder4 = (num/10000) %10;		// fifth number

	if (reminder1 == reminder4 && reminder2 == remindee3 )
		cout<<"Palindromes Number "<<endl;
	else 
		cout<<" Not Palindromes Number " <<endl;





return 0;

}