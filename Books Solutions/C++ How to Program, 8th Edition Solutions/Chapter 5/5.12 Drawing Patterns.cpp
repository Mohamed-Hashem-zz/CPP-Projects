// How To program 8th Edition 
// Number page of problem : 222 , question number : 5.12
// Drawing Patterns With Nested For Loops

#include <iostream>
using namespace std;
int main()
{

	int num=0,i,j,k;

	 cin>>num;

	 for( i =1;i<=num;i++)
	 {
		 // Part a

	for(j =1;j<=i;j++)
			cout<<"*";

	for( k=1;k<=(10-i);k++)
			cout<<" ";
			
		cout<<"\t";
			
		// Part b

	for( j = num ;j>=i;j--)
			cout<<"*";

	for (k=1 ; k< i ;k++)
			cout<<" ";

		cout<<"\t" ;

		// Part c

	for( k=num;k > i;k--)
				cout<<" ";

	for( j=1 ; j <= i ; j++)
			cout<<"*";

		  cout<<"\t";

				// Part d


	 for ( k=1;k<i;k++)
		    cout<<" ";

	for(j=num ; j>= i;j--)
			 cout<<"*";

		 cout<<"\n";
	 }


	
return 0 ;
}