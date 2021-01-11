#include <iostream>
#include <sstream>
#include <string>

#include "Tree.h"

using namespace std;

int main()
{
	Tree <string> str;

	string input , word;
	cout << "Enter the String : ";
	getline(cin , input);
	
	istringstream stream(input);

	while (stream >> word) { str.insert(word); }

	str.inOrder();
	cout << endl;

	str.postOrder();
	cout << endl;

	str.preOrder();
	cout << endl;
	return 0;
}