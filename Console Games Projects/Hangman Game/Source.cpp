#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <time.h>
#include <vector>

using namespace std;

int incorrectAnswer;
int countValid_Char;

void startPoint (); // start point of game
void newGame (); // play game
void hashWord ( const string ); // display word in #
void DrawHangman ( unsigned int ); // display Hang Man

int main ( )
{
	startPoint ();

	return 0;
}

void startPoint ( )
{
	int choice = 0;

	cout << "\t#################################################\n";
	cout << "\t# Welcome to Hangman Game               \t#\n";
	cout << "\t#  1 - Clear Screen To Start New clear Screen \t#\n";
	cout << "\t#  2 - New Game                        \t\t#\n";
	cout << "\t#  3 - End Game                       \t \t#\n";
	cout << "\t#################################################\n";

	cout << "\n\tEnter Your Choice : ";
		cin >> choice;

		if ( choice == 1 )
		{
			system ( "cls" ); // to clear Screen
			startPoint ();
		}
		else if ( choice == 2 )
			newGame ();
		else if ( choice == 3 )
			cout << endl , exit ( 0 );
		else
		{
			system ( "cls" );
			cerr << "\a\n Please, Enter Valid Number ( 1 to Start New Game ) or ( 2 to End The Game )\n\n";
			startPoint ( );
		}
} 

void newGame ()
{
	srand ( time ( 0 ) );

	ifstream File;

	File.open ( "words.txt" , ios::in ); // to read files

	if ( File.fail ( ) )
	{
		cerr << "\a\n\tThis file is not Found\n";
		exit ( 1 );
	}
	
	int counter = 0;
	string line;

	while ( getline ( File , line ) && !File.eof () )
		counter++;

	string *Lines = new string[counter]; // store Line of File into Array of Strings
	for ( int i = 0; !File.eof (); i++ )
	{
		getline ( File , line );
		Lines[i] = line;
	}

	File.close ();

	int random_Number = rand () % counter; // to generate Randome number

	string word = Lines[random_Number]; // to extract the word to string variable

	hashWord ( word );
}

void hashWord ( const string word )
{
	int incorrectAnswer = 0;
	
	int countValid_Char = 0;

	int Length = word.length ( );

	char *WordHash = new char[Length]; // to store Word as # in array of char..

	cout << "\n\tPlease, Guess The Correct Charachter to Complete the Word :  ";

	for ( size_t i = 0; i < Length; i++ )
	{
		WordHash[i] = '#';
		cout << WordHash[i];
	}
	
	bool flag = false;

	cout << "\n\n\tThe Length of the Word = " << Length << endl;

	char ch;

	while ( Length-- )
	{
		cout << "\n\tEnter a Charachter you Guess : ";
		  cin >> ch;

		if ( isalpha ( ch ) ) // to determine that the input char is alphabet
		{

			flag = false;

			cout << "\n\tThe Guessed Word is : ";

			for ( size_t i = 0; i < word.length (); i++ )
			{
				if ( ch == word[i] && flag != true && WordHash[i] != ch )
				{
					WordHash[i] = ch;
					countValid_Char++;
					flag = true;
					break;
				}
			}

			// display the array of hashes after Guessing
			for ( size_t i = 0; i < word.length ( ); i++ )
				cout << WordHash[i];

			cout << endl;

			if ( !flag )
			{
				incorrectAnswer++;
				DrawHangman ( incorrectAnswer );// to draw hangman
			}
			else
			{
				cout << "\n\tWell , You Guessed The correct charachter\n";
				cout << "\n\t---------------------------------------------\n";
			}

			cout << "\n\tThe Guessed Word is : ";

			for ( size_t i = 0; i < word.length ( ); i++ )
				cout << WordHash[i];

			cout << endl;
		}
		else
		{
			cerr << "\a\n\tPlease Enter Valid Charachter\n";
			cout << "\n---------------------------------------------\n";
			system ( "cls" );
			hashWord ( word );
		}
	}
	// when u end the count of gusses
	if ( countValid_Char == word.length() )
		cout << "\n\tYOU WON! ,Congratualtion for gussing the correct word \n\n";
	else
		cout << "\a\n\tGAME OVER ,Good Luck Next Time ,Try Again!\n\n";

	delete[] WordHash; // deallocate the array of char

	startPoint ();
}

void DrawHangman ( unsigned int incorrect )
{
	system ( "cls" );

	cout << "\n\tWrong Answer , You was about to guess the  Correct charachter\n\n";
	cout << "\t\t#################\n";
	cout << "\t\t#\t\t#\n";
	switch ( incorrect )
	{
		case 1:
				cout << "\t\t#\t";
				cout << " O \t#" << endl;
				break;
		case 2:
			cout << "\t\t#\t";
			cout << " O \t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			break;

		case 3:
			cout << "\t\t#\t";
			cout << " O \t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			cout << "\t\t#\t/  \t#" << endl;
			break;

		case 4:
			cout << "\t\t#\t";
			cout << " O \t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			cout << "\t\t#\t/ \\\t#" << endl;
			break;

		case 5:
			cout << "\t\t#\t";
			cout << " O \t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			cout << "\t\t#\t/ \\\t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			break;

		case 6:
			cout << "\t\t#\t";
			cout << " O \t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			cout << "\t\t#\t/ \\\t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			cout << "\t\t#\t/  \t#" << endl;
			break;

		default:
			cout << "\t\t#\t";
			cout << " O \t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			cout << "\t\t#\t/ \\\t#" << endl;
			cout << "\t\t#\t | \t#" << endl;
			cout << "\t\t#\t/ \\\t#" << endl;
			cout << "\a\n\t The Game Over \n\n";
			
			startPoint ();
			break;
	}

	cout << "\t\t#\t\t#\n";
	cout << "\t\t#################\n";

	cout << endl;
}
