#include <bits\stdc++.h>
#include <iomanip>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <numeric>
using namespace std;

void Draw( );
void firstPerson() ;
void secondPerson(	);
char theWinner();
void validation_Winner();

const int rows  = 3 ;
const int columns  = 3;

int counter = 0 ;

char matrix[rows][columns]={ '1' , '2' , '3' , '4' , '5' , '6' , '7' , '8' , '9' };

int k ;

char Player1 = 'X';

char Player2 = 'O';

void Draw( )
{	
		system("cls");	 // to make the page clear and start as Start Point	.

		cout<<"\t \t \t   ===================== \n";
		cout<<"\t \t \t   || Tic - Tac - Toe || \n";
		cout<<"\t \t \t   ===================== \n";

		cout<<endl;

			cout<<"\t \t  Choose a cell numbered from 1 to 9 as below and play \n " << endl;


		cout<<"\t \t \t \t " << matrix[0][0] << " | " << matrix[0][1] << " | " << matrix[0][2] << "\n";

		cout<<"\t \t \t       ------------- " << endl;

		cout<<"\t \t \t \t " << matrix[1][0] << " | " << matrix[1][1] << " | " << matrix[1][2] << "\n";

		cout<<"\t \t \t       ------------- " << endl;

		cout<<"\t \t \t \t " << matrix[2][0] << " | " << matrix[2][1] << " | " << matrix[2][2] << "\n";

	    cout<<"\n \n = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = = =  \n \n " ;

}

void firstPerson()
{
	 k = 0;

    char num1 = '\0' ;

	cout<<"The Player '\ X '\ , please Enter Number of the Field :  "; 

	cin >> num1 ;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns ; j++)
		{

			if( matrix[i][j] == num1 && matrix[i][j] != Player1 &&  matrix[i][j] != Player2)
			{
				matrix[i][j] = Player1 ;  
			}
			else 
				k++;
	}	
}

	if( k == 9 )
		{
			cout<< "\n \a \t That's Wrong , this Field has been token >> Please Enter Valid field \n "<<endl;
			cin.ignore();
			cin.clear();
			firstPerson();
		}

}


void secondPerson()
{
	  k = 0;

	char num2 = '\0';

	cout<<"The Player '\ O '\ , please Enter Number of the Field :  "; 

	cin >> num2;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns ; j++)
			{
				if( matrix[i][j] == num2 && matrix[i][j] != Player1 &&  matrix[i][j] != Player2)
				{
					matrix[i][j] = Player2 ;  
				}
				else
					k++;

		}


	}

	if( k == 9 )
		{
			cout<< "\n \a \t That's Wrong , this Field has been token >> Please Enter Valid field \n "<<endl;
			cin.ignore();
			cin.clear();
			secondPerson();
		}

}

char theWinner()
{
	  //first player

	for (int i = 0; i < rows; i++)
	{
		int counter = 0 ;

		for (int j = 0; j < columns; j++)
		{
			if(matrix[i][j] == Player1)
					counter++;
		}

		if (counter == 3)
		{
			return Player1;
		}
	}

	for (int i = 0; i < rows; i++)
	{
		int counter = 0 ;

		for (int j = 0; j < columns; j++)
		{
			if(matrix[j][i] == Player1)
					counter++;
		}

		if (counter == 3)
		{
			return Player1;
		}
	}

		if (matrix[0][0] == Player1 && matrix[1][1] == Player1 && matrix[2][2] == Player1)
		return Player1;
	
		if( matrix[0][2] == Player1 && matrix[1][1] == Player1 &&  matrix[2][0] == Player1  )
		return Player1;

	///// second player

	for (int i = 0; i < rows; i++)
	{
		int counter = 0 ;

		for (int j = 0; j < columns; j++)
		{
			if(matrix[i][j] == Player2)
					counter++;
		}

		if (counter == 3)
		{
			return Player2;
		}
	}


	for (int i = 0; i < rows; i++)
	{
		int counter = 0 ;

		for (int j = 0; j < columns; j++)
		{
			if(matrix[j][i] == Player2)
					counter++;
		}

		if (counter == 3)
		{
			return Player2;
		}
	}


	if (matrix[0][0] == Player2 &&  matrix[1][1] == Player2 && matrix[2][2] == Player2)
		return Player2;

	
	if(matrix[0][2] == Player2 && matrix[1][1] == Player2 && matrix[2][0] == Player2  )
		return Player2;

	return '/';

}


void validation_Winner()
{
		
	if (theWinner() == Player1)
			{
				cout<<"\a \t The Game is over , The Player \' X '\ is the Winner \n" << endl;
				exit(0);
			}
		else if ( theWinner() == Player2 )
			{
				cout<<"\a \t The Game is over , The Player \' O '\ is the Winner \n" << endl;
				exit(0);
			}	
		else if ( theWinner() == '/' && counter == 9 )
		{
				cout<<"\a  \t The Game is over , NoBody Win \n"<< endl;
				exit(0);
		}
}

int main()
{ 

	Draw();

	while (true)
	{
		counter++;

		firstPerson();

		Draw();

		validation_Winner();

		secondPerson()	;

	    counter++;

		Draw();

		validation_Winner();

	}

  return 0;
}