// How To program 8th Edition 
// Number page of problem : 182 , question number : 4.34
// Factorial  - (b)
// find e

#include <iostream>
using namespace std;
int main ()
{
	 double factorial = 1 , i = 0, e = 0, term = 0;

	cin>> term; // number of terms which  e stop .

	while (i <= term)
	{
		( i==0 || i ==1 )? factorial = 1 : factorial*=i;  // to caclulate Factorial 

		e += 1/factorial; // the equation which calculate the expontient

		i++;
	}

	cout<<"The Value of e  : " << e <<endl;



return 0;

}