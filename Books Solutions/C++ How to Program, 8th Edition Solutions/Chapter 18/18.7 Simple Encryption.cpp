#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

void stringEncryption ( string &);
void stringDecryption ( string &);

int main ()
{
	string str = "";

	int choice = 0;

	cout << "Enter Your Choice : "; 
		cin >> choice;

	while ( choice != 0 ) // if u want to end the program
	{
		switch ( choice )
		{
			case 1:
				stringEncryption ( str);
				break;
			case 2:
				stringDecryption ( str );
				break;
			default:
				cerr << "\a\n\tU Entered unvalid Value\n";
				break;
		}
		cout << "\n-----------------------------------------------------------\n";
		cout << "\nEnter Your Choice : ";
		cin >> choice;
	}
	cout << endl;
	return 0;
}

void stringEncryption (string &str)
{
	cout << "\nThe String before Encryption operation is : "; 
	cin.ignore ();
	getline ( cin , str );

	for ( size_t i = 0; i < str.length(); i++ )
		str[i] += 13;

	cout << "\nThe String after Encryption operation is : ";
	cout << str << endl;
}

void stringDecryption (string &str)
{
	cout << "\nThe String before Decryption operation is : ";
	cout << str << endl;

	for ( size_t i = 0; i < str.length ( ); i++ )
		str[i] -= 13;

	cout << "\nThe String after Decryption operation is : ";
	cout << str << endl;
}
