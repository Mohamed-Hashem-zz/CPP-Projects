// How To program 8th Edition 
// Number page of problem : 223 , question number : 5.23 
// Diamond of asteriks

#include <iostream>
using namespace std;
int main()
{

	for(int i=1 ; i<=5 ; i++)
	{
		for( int j = 1 ; j<= 5-i ; j++)
				cout<<" ";

		for(int k=1 ; k <= 2*i-1 ; k++)
				cout<<"*";

		cout<<endl;
	}
	
	int  c = 7 ;
		
	 for(int i =1;i<=5;i++)
		
			{
					for(int j=1 ; j <= i;j++)
						cout<<" ";

					for(int k = c ; k>=1 ; k--)
						cout<<"*";

					cout<<endl;
					c-=2;
			}

return 0;

}