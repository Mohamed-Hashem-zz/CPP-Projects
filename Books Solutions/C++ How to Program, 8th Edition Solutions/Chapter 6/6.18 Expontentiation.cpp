// How To program 8th Edition 
// Number page of problem :290  , question number : 6.8
// Expontentiation

#include <iostream>

using namespace std;

int power ( unsigned int  , unsigned int );

int main()

{
	 unsigned int base ,  exp ;
	 cin >>base >> exp ;

	 int num = power ( base , exp );

	 cout<<num<<endl;


	return 0;
}

int power ( unsigned int base , unsigned int exp)
{
	int mult = 1;
	for ( int i = 1; i <= exp ; i++)
		mult *=  base  ;

	return mult ; 
}

