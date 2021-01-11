// How To program 8th Edition 
// Number page of problem : 179 , question number : 4.19
// find the Two Largest Number 

#include <iostream>
using namespace std;
int main()
{
	int num=0, firstLargest=0, secondLagrest=0, i=1;

	while (i<=10)
	{
		cin>>num;

		if(num > firstLargest)
		{
			secondLagrest = firstLargest;
			firstLargest = num;
		}
		else if ( num > secondLagrest && num < firstLargest)
			secondLagrest = num;

		i++;


	}
	cout<<" First Largest Number : "<<firstLargest <<endl;
	
	cout<<" second Largest Number : "<<secondLagrest <<endl;




return 0;

}
