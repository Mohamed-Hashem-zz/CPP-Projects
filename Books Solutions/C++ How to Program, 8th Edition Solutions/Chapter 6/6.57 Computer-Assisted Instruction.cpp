// How To program 8th Edition 
// Number page of problem :298  , question number : 6.57
// Computer-Assisted Instruction : Reducing Student Fatigue .

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;
int func(int , int );
void test();
void testContinues ();
void correctAnswer (int);
void falseAnswer (int )	  ;


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
	static int i = 1;
		int rand1 = 1 + rand () %12;

		int rand2= 1 + rand() % 12;

		int result1 = func(rand1,rand2), result2 = 0 ; 

		cout<<i<<" - How Much is "<<rand1 <<" times " <<rand2 <<" : ";
			i++;
		cin>>result2;

		if ( result2 == result1 )
			{	 
				int randSelection= 1+rand()%(4-1+1);
				correctAnswer ( randSelection)  ;
			}

		else 
		{		
				int randSelection = 1+rand()%(4-1+1) ;
				falseAnswer (randSelection) ;
		}
		
		cout<<"--------------------------------------------\n"<<endl;

			testContinues () ;

	}

  void falseAnswer (int randSelection)

   {
		 cout<<endl;

		   	switch (randSelection)
			{
			case 1:
				   	cout<<"\t No, Please try Again.  "<<endl;
					break;
			case 2:
					cout<<"\t Wrong ,Try once more ."<<endl	  ;
					break;
			case 3:
					cout<<"\t Don't give up!"<<endl;
					break;
			default:
					cout<<"\t No. Keep trying. "<<endl;
					break;
			}
   }
  void correctAnswer (int randSelection)
  {
	  cout<<endl;
	   	switch (randSelection)
			{
			case 1:
				   	cout<<"\t Very Good! "<<endl;
					break;
			case 2:
					cout<<"\t Excellent!"<<endl;
					break;
			case 3:
					cout<<"\t Nice Work!"<<endl;
					break;
			default:
					cout<<"\t Keep up the good Work!"<<endl;
					break;
			}
  }

  
void testContinues ()
{		
		 	char yn;
			cout << "\n do u need New Question ( y / n ): ";
			cin	>>yn;
			if(yn == 'y'||yn == 'Y')
		{
			cout<<endl;
			test();
			}
	
}