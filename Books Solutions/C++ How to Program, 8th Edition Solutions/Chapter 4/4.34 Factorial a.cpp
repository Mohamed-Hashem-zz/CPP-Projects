// How To program 8th Edition 
// Number page of problem : 182 , question number : 4.34
// Factorial  - (a)
// find Factorial of number x

#include <iostream>
using namespace std;
int main ()
{
	unsigned int num =0, factoria=1 , i =0;

	cin>>num;
	while (i<= num)
	{
		( i==0 || i ==1 )? factoria = 1 : factoria*=i;

		i++;
	}
	cout<<"Factoria : "<<factoria <<endl;



return 0;

}