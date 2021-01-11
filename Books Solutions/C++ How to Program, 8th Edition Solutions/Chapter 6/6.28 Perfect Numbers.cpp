// How To program 8th Edition 
// Number page of problem : 292 , question number : 6.28
// Perfect Numbers

#include <iostream>
using namespace std;
void divisors();
int main()
{	  divisors ();

	return 0;
}

void divisors()
{		  
	int sum=0, i=1 ;

		 for ( int j =1 ; j <=100 ; j++)
		 {
				sum=0 , i=1 ;

		while ( sum < j )
			{	
				sum += i ;
				++i;
			}

		if (sum == j	)
			cout << " = " << j << " is Perfect Number \n";

		 }

}
