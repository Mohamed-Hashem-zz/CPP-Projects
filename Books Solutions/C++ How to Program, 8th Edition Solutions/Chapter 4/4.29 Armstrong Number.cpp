// How To program 8th Edition 
// Number page of problem : 182 , question number : 4.29
// Armstrong Number


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int num=0,temp=0,reminder=0 ,div=1,sum=0,counter=0;
	cin>>num;
	temp=num;
	while (temp !=0)
	{
		temp/=10;
		counter++;
	}

	temp=num;
	while (temp != 0 )
	{
		reminder = temp%10;
		sum+=pow(reminder,counter);
		temp/=10;
	}
	
	if(sum==num)
		cout<<"Armstrong Number "<<endl;
	else 
		cout<<"Not \n";


return 0;
}