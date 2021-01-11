// How To program 8th Edition 
// Number page of problem :298  , question number : 6.60
// Computer-Assisted Instruction : Varying The Types of problems .

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
using namespace std;

 double func(short ,double &, int &, int , int );
 void falseAnswer (int randSelection);
 void correctAnswer (int randSelection);
 void test();
void testContinues ();
void percentage ( double  , double ) ;
void Mult (double  &, double &);
void levelOfDifficulty ( int , short , int & , double & , double &);
void shapeOfOperation ( short ,double &, int & , int ,int );

int main()
{	

	test();

	return 0;
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

				   	  short op ; 
			  cout<<" Enter the operation : ";
				  cin>>op;

				  cout<<endl;

			for (int i =1;i<=10 ; i++ )
				levelOfDifficulty (level,op,counter,trueCounter,falseCounter);

}

 void levelOfDifficulty ( int num ,short op,int &counter ,  double &trueCounter,double  &falseCounter)
 {		
		 srand( time(NULL) );  
		  int  rand1 = 0 , rand2 = 0;

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
				
				double userResult = 1 ;

		  	   shapeOfOperation (op,userResult,counter, rand1,rand2);

				double  realResult = func(op,userResult,counter ,rand1,rand2);

				 		counter++; 

			if ( realResult == userResult ) 
				{
					int randSelection= 1+rand()%(4-1+1);

				correctAnswer ( randSelection)  ;	

					trueCounter++ ;
			}

			else 
			{
					 int randSelection = 1+rand()%(4-1+1) ;
				falseAnswer (randSelection) ;
					falseCounter++;
		 			
			}

 }


 double func(short op ,double &result,int &counter, int rand1 , int rand2)
{

		switch (op)
					{
						case 1  :
							return rand1 + rand2 ;
						break;

						case 2:
							return rand1 - rand2 ;
						break;

						case 3:
							return rand1 * rand2 ;
						break;

						case 4:
							return rand1 / rand2 ;
						break;
						
						default : 
							 op = 1 + rand () % 4;
						 shapeOfOperation (  op ,result,counter ,  rand1, rand2);
								return	 func(op,result,counter,rand1,rand2);

							break;
					}
}

void shapeOfOperation ( short op,double &result, int &counter , int rand1,int rand2)
 {			
	 switch (op)
	 {
	 case 1 :
			cout << counter << " - How Much is "<<rand1 << " + " <<rand2 <<" : ";
			cin>>result;
			break;
	 case 2 :
			cout << counter << " - How Much is "<<rand1 << " - " <<rand2 <<" : ";
			cin>>result;
			break;
	 case 3 :
			cout << counter << " - How Much is "<<rand1 << " * " <<rand2 <<" : ";
			cin>>result;
			break;
	 case 4 :
			cout << counter << " - How Much is "<<rand1 << " / " <<rand2 <<" : ";
			cin>>result;
			break;
	 }
 }



  void falseAnswer (int randSelection)

   {
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
					cout<<endl;

   }

  void correctAnswer (int randSelection)
  {
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

		cout<<endl;
  

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