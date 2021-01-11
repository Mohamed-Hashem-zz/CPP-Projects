// How To program 8th Edition 
// Number page of problem :298  , question number : 6.58
// Computer-Assisted Instruction : Monitoring  Student Performance .

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int func(int , int );
void test();
void testContinues ();
void percentage ( double  , double ) ;

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
	double trueCounter=0, falseCounter=0;

	for (int i =1 ; i <= 10 ; i++)
	{

		int rand1 = 1 + rand () %12;

		int rand2= 1 + rand() % 12;

		int result1 = func(rand1,rand2) , result2 = 0 ; 

		cout<< i << " - How Much is "<<rand1 <<" times " <<rand2 <<" : ";

		cin>>result2;

		( result2 == result1 ) ? trueCounter++ : falseCounter++;
		
	}
			cout<< "\n The Numebr of correct answer : "<<trueCounter <<endl;
			cout<< "\n The Numebr of false answer : "<<falseCounter <<endl;

			percentage (trueCounter,falseCounter);

			testContinues () ;

	}


void percentage ( double trueCounter , double  falseCounter ) 
{
	trueCounter = ( trueCounter / 10 ) * 100; 	 // one equation enough to test the exam . 

	if ( trueCounter >= 75 )
		cout<<"\n Congratulations , you are ready to go to next level1 !"<<endl;
	else 
		cout<<" \n Please , ask your teacher for extra help ."<<endl;

}

void testContinues ()
{		
		 	char yn;
			cout << "\n are there another students ( y / n ) : ";
			cin	>>yn;
				if(yn == 'y'||yn == 'Y')
					{
						cout<< "\n --------------------------------------------------------- \n"<<endl;
						test();
					}			
}