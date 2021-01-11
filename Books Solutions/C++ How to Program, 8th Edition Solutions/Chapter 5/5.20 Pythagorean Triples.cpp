// How To program 8th Edition 
// Number page of problem : 223 , question number : 5.20 
// Pythagorean Triples

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int num=0;
	for (int i=1;i<=500;i++)
	{
		for(int j=1;j<=500;j++)
		{
			for(int k=1;k<=500;k++)
			{
				if(	i == sqrt(k * k + j * j) )
					{ 
						cout<<i <<"\t" ;
						cout<<j<<"\t" ;
						cout<<k<<"\t";
						cout<<endl;
						num++;
						
					}
			}
		}
	}
	cout<<endl<<num<<endl;

	return 0;
}