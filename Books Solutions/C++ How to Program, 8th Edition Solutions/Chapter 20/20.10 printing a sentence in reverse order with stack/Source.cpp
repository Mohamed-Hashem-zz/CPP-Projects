#include <iostream>
#include <sstream>
#include <string>
#include "Stack.h"
using namespace std;

int main()
{
	Stack <char> stk;
	string str;

	cout << "Enter The Sentence :";
	getline(cin , str);

	for (size_t i = 0; i < str.length(); i++)
		stk.push(str[i]);
	
	cout << "The Sentence After Reversing :";
		while (!stk.is_Empty())
		{
			cout << stk.top();
			stk.pop();
		}

		cout << endl;
	return 0;
}