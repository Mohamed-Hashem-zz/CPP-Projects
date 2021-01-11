// How To program 8th Edition 
// Number page of problem :297  , question number : 6.56
// Computer-Assisted Instruction 

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int func(int rand1,int rand2);
void test();

int main()
{	
	srand( time(0) );
	test();
	return 0;
}
int func(int rand1,int rand2)
{
	return rand1 * rand2 ;
}
void test( )
{
	
	char yn;
//	static int trueCounter=0, falseCounter=0;
	int rand1 = 1 + rand () %12;

	int rand2= 1 + rand() % 12;

	int result1 = func(rand1,rand2), result2 = 0 ; 

	cout<<" How Much is "<<rand1 <<" times " <<rand2 <<" : ";

	cin>>result2;

	if ( result2 == result1 )
		{
			cout<<"\t Very Good! "<<endl;
			cout<<" Do u need another Question ( y/n )  : ";
			cin	>>yn;
			if(yn == 'y'||yn == 'Y')
				test();
		}
	else 
	{
			cout<<"\t No Please Again!  "<<endl;
			cout<<" Do u need another Question ( y/n )  : ";
			cin	>>yn;
			if(yn == 'y'||yn == 'Y')
				test();
	}

}
