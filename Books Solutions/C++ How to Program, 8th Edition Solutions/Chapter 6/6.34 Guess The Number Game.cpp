// How To program 8th Edition 
// Number page of problem : 292 , question number : 6.34
// Guess The Number Game 

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int Guess(int num);
void Result ();
int main ()
{
	srand(time (0));
	cout << " I have a number between 1 and 1000. \n Can you guess my number? \n Please type your first guess. "   ;
		  
	Result();
		  

	return 0;
}
int Guess(int num)
{
   for ( int i =1 ;i<=1000;i++)
	   return 1 + rand () % 1000 ;

}
		
void Result ()
{
			int num =0 ;	   char yn ;

		  cin>>num;

	int guessNum = 1;
		 
	for ( int i =1;i <= 1000;i++)
		  {			   
			  guessNum = Guess (  num )	;

			  if ( num == guessNum )
				{
					cout<< " Excellent U Guessed Right "<<endl;
				  cout<< " Would u like to continue ( y / n ) ? ";

				  cin>>yn;

				  if (yn =='y' || yn=='Y')
					  Result();
				  else 
					  return ;
			  
					}

			  else if  ( num > guessNum  )
					  cout <<"  Too Low , Try again " <<endl;

			  else 
					  cout << "  Too Hight , Try again "<<endl;


		  }

}