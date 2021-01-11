// How To program 8th Edition 
// Number page of problem : 352 , question number : 6.15 
// Duplicate Elimination 

#include <iostream>
#include <iomanip>
using namespace std;
const int size = 10;

void arr()
{		
	int a[size] = {0} ,  counter = 1 , value =0;

		   bool flag = false ; 

		   for (int i = 0 ;i < size ; i++)
			  {		
				  cout << counter << " Enter Numbers Between 10 to 100  :	   ";
						 cin>>a[i]; 

				  if (a[i] >= 10 && a[i] <= 100 )
						counter++;
					  
			 }

	counter = 0;

		for ( int i =0;i<size;i++)
		{	
			flag = false;
				value = a[i];

				for(int j =0 ; j < i ; j++)
				{
					if (a[j]==value )
						flag = true ;
				}

			if ( !flag )
					a[counter++] = value ;
		}


		for (int  i =0 ; i < counter ; i++)
			{
				if (a[i] >= 10 && a[i] <= 100 )
				cout<<a[i]<<setw (4);
			}

	cout<<endl;
}

int main()
{
	   arr();
	return 0;
}
