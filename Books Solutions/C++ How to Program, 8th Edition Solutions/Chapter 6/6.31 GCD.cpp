// How To program 8th Edition
// Number page of problem : 292 , question number : 6.31
// Greatest common Divisor

#include <iostream>
using namespace std;
int GCD(int  , int );

int main ()
{
	int num1,num2;

	cin>>num1>>num2;

	cout<< GCD (num1, num2 )<<endl;

	return 0 ;
}

//int GCD(int x , int y)  // Solution 1
//{
//	while ( y != 0 )
//	{
//		int temp = x % y;
//		x = y;
//		y = temp;
//	}
//	return x;
//}

/*
int GCD(int high , int low) // Solution 2
{
	if ( low == 0 )
		return high;

	return GCD(low , high % low);
}
*/

int GCD(int num1, int num2) // Solution 3
{
	int max1=0,max2=1;

	max2 = max1;

	for ( int i =2 ; i <= ( ( num1 < num2) ?  num1 : num2 ) ;i++)
	{
		if ( num1 %  i == 0 && num2 % i == 0)

		{
				if (i >= max1)
							max1 = i;

		}
	}

	return max1;
}
