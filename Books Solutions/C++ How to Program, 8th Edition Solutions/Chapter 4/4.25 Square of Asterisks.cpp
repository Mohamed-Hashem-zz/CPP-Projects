// How To program 8th Edition 
// Number page of problem : 181 , question number : 4.15
// Square of Asterisks

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int num, counter_1=1, counter_2=1;

	cin>>num;

	while (counter_1 <= num)
{
	if (counter_1 == 1) // to print the first row 
	{
		while ( counter_2 <= num )
		{
			if( counter_2 < num )
					cout<<"*";
			else 
					cout<<"*"<<endl;

			counter_2++;
		}
		counter_2 = 1;
	}
	else if ( counter_1 < num )
		{
				cout << "*" << setw(num-1)  << "*" << endl;
		}

	else 
		
	{
		while ( counter_2 <= num ) // to print the last row 
		{
			if( counter_2 < num )
					cout << "*" ;
			else 
					cout << "*" << endl;

			counter_2++;
		}
	
	}
	counter_1++;


}

return 0;
}