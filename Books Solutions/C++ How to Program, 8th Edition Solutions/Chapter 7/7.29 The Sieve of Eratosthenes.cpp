// How To program 8th Edition 
// Number page of problem : 359 , question number : 7.29 
// The Sieve of Eratosthenes.

#include <iostream>
#include <string>
#include <iomanip>
using namespace std	  ;
const int size = 1000 ;
int main()
{
	int arr[size]={};
	for (int i = 0;i < size ;i++)
			arr[i] = 1 ;

	for (int i =1;i<size;i++)
	{
		if (i==1)
			arr[i] = 0;
		else 
		{	
			for (int  j = i ; j <size;	j++)
			{
				if(j % i == 0 && j != i)
						arr[j]= 0 ;
				else
					arr[j] = i;

			}

		}

	}
		
	for (int i = 2 ;i<size;i++)	
			if(arr[i]==i)
		cout<<arr[i]<<"  is prime number ."<<endl;



	return 0 ;
}