// How To program 8th Edition 
// Number page of problem : 182 , question number : 4.34
// Factorial  - (c)
// find expontient x ;

#include <iostream>
using namespace std;
int main ()
{
	 double factorial = 1 , i = 0, exp = 0, term = 0 , x = 0;

	cin>> term; // number of terms which  e stop and terms should be bigger than 14 to calculate the equation correctly.

	cin>>x; // the value of the power x.

	while (i <= term)
	{
		( i==0 || i ==1 )? factorial = 1 : factorial*=i;  // to caclulate Factorial 

		exp += pow(x,i)/factorial; // the equation which calculate the expontient of x

		i++;
	}

	cout<<"The Value of e  : " << exp <<endl;


return 0;

}