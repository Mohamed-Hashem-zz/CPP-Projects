// How To program 8th Edition 
// Number page of problem :298  , question number : 6.59
// Computer-Assisted Instruction : Difficulty Level.

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int func(int , int );
void test();
void testContinues ();
void percentage ( double  , double ) ;
void Mult (double  &trueCounter, double &falseCounter);
 void levelOfDifficulty ( int num ,int &counter ,  double &trueCounter,double  &falseCounter);

int main()
{	
	srand( time(0) );  

	test();

	return 0;
}
inline int func(int rand1 , int rand2)
{
	return rand1 * rand2 ;
}
void test( )
{
				   double trueCounter =0,falseCounter=0;

				   Mult (trueCounter,falseCounter);

					cout<< "\n The Numebr of correct answer : "<<trueCounter <<endl;
					cout<< "\n The Numebr of false answer : "<<falseCounter <<endl;
				
					percentage ( trueCounter , falseCounter );

					testContinues();


	}

void Mult (double  &trueCounter, double &falseCounter)
{
		int level = 0 , counter=1;

			cout<<" Enter Level of Difficulty : ";
				cin>>level;

			for (int i =1;i<=10 ; i++ )
				levelOfDifficulty (level,counter,trueCounter,falseCounter);

}
 void levelOfDifficulty ( int num ,int &counter ,  double &trueCounter,double  &falseCounter)
 {				
		  int resultMulti = 0 , rand1 = 0 , rand2 = 0;
		  switch (num)
		  {
		  case 1:
			 rand1 = 1 + rand () % 9 ;
				
			 rand2 = 1 + rand () %  9;
			
			break;

		  case 2:
			 rand1 = 10 + rand () % ( 99 - 10 + 1 ) ;
		  
			 rand2 = 10 + rand () % ( 99 - 10 + 1 ) ;
			 
			break;

		  case 3 :
			 rand1 = 100 + rand () % ( 999 - 100 + 1 ) ;
		  
			 rand2 = 100 + rand () % ( 999 - 100 + 1 );  
			
			break;

		  default:
			 rand1 = 1000 + rand () % (9999 - 1000 + 1) ;
		
			 rand2 = 1000 + rand () % (9999 - 1000 + 1) ;
			
			break;
		  }

		  	cout << counter << " - How Much is "<<rand1 <<" times " <<rand2 <<" : ";
			cin>>resultMulti;
			
			counter++;

		  int result = func(rand1,rand2);
		 ( result == resultMulti ) ? trueCounter++ : falseCounter++;
		 

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