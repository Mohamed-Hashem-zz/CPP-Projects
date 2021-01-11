#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <cctype>
using namespace std;

int alphapet[60] = {};

void PartA (const char *);
void PartB (char *);

int main ()
{
	char str[3000];

	short choice = 0;

	cout << "Enter the Part u want : ";
	cin >> choice;

	cout << "Enter Text : ";
	cin.ignore (1000 , '\n');
	cin.getline (str , ':'); // write colon to end the stream

	switch (choice)
	{
		case 1:
			PartA (str);
			break;
		case 2:
			PartB (str);
			break;
		default:
			cout << "\aYou have been Entered Wrong Choice ,Try again." << endl;
			break;
	}

	return 0;
}
void PartA (const char *str)
{
		for (size_t i = 0; i < strlen(str); i++)
		++alphapet[str[i] - 'A'];

	for (size_t i = 0; i < 60; i++)
	{
		if (alphapet[i] > 0)
			cout << char (i + 'A') << "  : " << alphapet[i] << endl;
	}
}

void PartB (char *str)
{
	char *tokenPtr = strtok (str , " ");

	while (tokenPtr != NULL)
	{
		cout << "\nWord Token : " << tokenPtr << "\n\n";

		cout << "WordLenght  |  Occurrences\n\n";

		for (size_t i = 0; i < strlen (tokenPtr); i++)
			++alphapet[tokenPtr[i] - 'A'];

		for (size_t i = 0; i < 60; i++)
		{
			if (alphapet[i] > 0)
				cout << char (i + 'A') << "\t    |   " << alphapet[i] << endl;
		}

		for (size_t i = 0; i < 60; i++)
			alphapet[i] = 0;
		
		cout << "\n-----------------------------\n";

		tokenPtr = strtok (NULL , " ");
	}
}