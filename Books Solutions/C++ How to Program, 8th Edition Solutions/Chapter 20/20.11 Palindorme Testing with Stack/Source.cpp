#include <iostream>
#include <string>
#include <sstream>
#include "Stack.h"
using namespace std;

int main()
{
	Stack <char> stk;
	string str;
	cout << "Enter a Sentence :";
	getline(cin , str);

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && isalpha(str[i]))
			stk.push(str[i]);
	}

	bool flag = true;

	for (size_t i = 0; i < str.length() && flag ; i++)
	{
		if (str[i] != stk.top() && str[i] != ' ')
			flag = false;
		
		if (str[i] != ' ' && isalpha(str[i]))
			stk.pop();
		
	}
	if (flag)
		cout << "The sentence is a palindrome" << endl; 
	else 
		cout << "\aThe sentence is not palindrome" << endl;
	
	return 0;
}