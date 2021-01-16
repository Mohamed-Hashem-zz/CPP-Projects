#include  <bits\stdc++.h>
#include <Windows.h>
#include <conio.h>
#include <algorithm>	
#include <iostream>
#include <iomanip>	
#include <bitset>	
#include <string>	
#include <cctype> 	
#include <cmath> 	
#include <cstdlib>	
#include <ctime>
#include <cstdio>

using namespace std;

void Setup();
void chooise();
void Draw();
void input();
void actions();

const int  height = 20 ;
const int  width  = 30 ;

int x , y , goalX , goalY , score ,tailX[100], tailY[100], nTail;	 

enum snakeDirctions { Stop = 0 , Up , Down , Right , Left } ;

snakeDirctions dirSnake;									   

bool gameOver = false ;


int main()
{ 
	Setup();

	while ( !gameOver )
	{  
		Draw();
		input();
		actions();
		_sleep(5);
	}

	cout<<endl;

  return 0;
}

void Setup()
{
	gameOver = false ;

	dirSnake = Stop  ;

	x = width / 2 ;
	y = height / 2;

	goalX =  rand() %   width  ;
	goalY = rand() %   height  ;
	score = 0;
	
}

void Draw()
{
	system("cls");

	for (int i = 0; i < width + 3 ; i++)
		cout << "#";
					   cout << endl;

	for (int i = 0 ; i < height ; i++)
		{
			for (int j = 0; j < width; j++)
			{
				if ( j == 0 )
					cout << "||";
				else if ( i == y && j == x ) 
					cout<<"O";
				else if ( i == goalY && j == goalX )
					cout<<"@";
				else
				{
					 bool print = false;
					for (int k = 0; k < nTail; k++)
					{
						if (tailX[k] == j && tailY[k] == i)
						{
							cout << "o";
							print = true;
						}
					}
					if (!print)
						cout << " ";

				}

			  if ( j == width - 1)
					cout << "||";

			}
			cout<<endl;
		}

	for (int i = 0; i < width + 3 ; i++)
		cout << "#"  ;
	
	cout<<endl;

		cout << "Score : " << score << endl;



}

void input()
{
			
	if(_kbhit())
	{
		switch (_getch())
		{
		case 'a':
		case 'A':
			dirSnake = Left ;
			break;

		case 'w':
		case 'W':
			dirSnake = Up;
			break;

		case 's':
		case 'S':
			dirSnake = Down;
			break; 

			case 'd':
		case 'D':
			dirSnake = Right ;
			break;

		case 'g':
		case'G':
			 gameOver = true ;
		}	

	}

}

void actions()
{	 
	int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for (int i = 1; i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

	switch (dirSnake)
	{
	case Up:
				y--;
		break;

	case Down:
				y++;
		break;

	case Right:
				 x++;
		break;

	case Left:
				  x--;
		break;

	default:
		break;
	}

	if ( x > width || x < 0 || y > height  || y < 0 )
	{

		if (x >= width) x = 0;
		else if (x < 0) x = width - 1;

		  chooise();

		if (y >= height) y = 0;
		else if (y < 0) y = height - 1;
	}


	    for (int i = 0; i < nTail; i++)
		{
			if (tailX[i] == x && tailY[i] == y)
				 gameOver = true;
		}

	if ( x == goalX && y == goalY )
	{
		score += 10;
		goalX = 3 + rand() %  ( width - 3 + 1) ;
		goalY = 3 + rand() %  ( height - 3 + 1) ;
		nTail++;
	}


}

void chooise()
{ 
		char yn ;

		cout <<	" Do u want to play again , ( y / n ) : ";

		cin>>yn;

		if (yn == 'y' || yn == 'Y')
			Setup();
		else if (yn == 'n' || yn =='N' )
			exit(0);
		else
		{
			cout <<"u have been entered unvalid value , please Enter valid value." << endl;
			  chooise ();
		}

}