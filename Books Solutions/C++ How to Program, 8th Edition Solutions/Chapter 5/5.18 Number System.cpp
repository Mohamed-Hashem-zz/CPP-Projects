// How To program 8th Edition 
// Number page of problem : 223 , question number : 5.18
// Number System

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	
	
	int num=0,reminder=1,i=0;
	cin>>num;
	int temp=num;

	long long binaryNumber=0;

	while(temp!=0)
	{
			reminder=1;
			reminder = temp%2;
			temp/=2;
			binaryNumber += reminder *  pow(10.0,i) ;
			i++;
	}

	cout<<" Binary Number : "<<binaryNumber <<endl;

	
	 temp=num;

	 int OctalNumber=0;
		 i=0;

	while(temp !=0)
	{
			reminder = temp % 8;
				temp/=8;	
		    OctalNumber += reminder * pow(10.0,i) ;
			i++;
		
	}
	cout<<"   Octal Number : "<< OctalNumber<<endl;
	


return 0;
}
