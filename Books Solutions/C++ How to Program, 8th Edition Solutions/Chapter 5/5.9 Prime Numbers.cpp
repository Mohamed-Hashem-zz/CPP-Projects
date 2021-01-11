// How To program 8th Edition 
// Number page of problem : 222 , question number : 5.9
// Prime Numbers

#include <iostream>
using namespace std;
int main()
{
	
	for(int i =1;i<=25;i++) // to test number from 1 : 25
	{
		bool flag = true; // Mark to test number true or false

		for(int j=2;j<i;j++)
		{
			if(i%j==0) 
			{	
				flag=false ; // That mean, that the number ( i ) is Not Prime
				break;
			}
		}

		if (flag == true ) // test Flag , is it false ( Not Prime ) or true ( Prime)

			cout<<i<<endl;
	}

return 0;
}