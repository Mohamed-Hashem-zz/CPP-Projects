// How To program 8th Edition 
// Number page of problem : 291 , question number : 6.24 
// Separating Digits

#include <iostream>
using namespace std;
 void digits(int num);
int main()
{
		int num =0;

		cin>>num;

		digits(num);

	return 0;
}

void digits(int num)
{
	int temp = num , i = 0, divide = 1;
	 while (  temp !=0)
	 {
		 temp /= 10;
		   i++;
	 }
		 temp=num;
		 
	 while ( i != 0)
	 {	  
		 --i;
		 temp = num;
		 divide =  temp / pow(10.0,i)   ;
		 divide %= 10;
		 cout<<divide<<" ";
	 }

}
