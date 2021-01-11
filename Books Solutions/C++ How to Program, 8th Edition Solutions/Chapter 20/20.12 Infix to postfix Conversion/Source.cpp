#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

string convertsToPostfix(string);
bool isOpperator(char);
int precedence(char );

int main()
{
	//(3+2)+7/2*((7+3)*2)

	string str;
	cout << "Enter The infix Expression :";
	getline(cin , str);

	cout << "\nThe Postfix Expression is = " << convertsToPostfix(str) << endl;
	return 0;
}

string convertsToPostfix(string str)
{
	Stack <char> stk;
	string temp = "";

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		else if (isdigit(str[i]) || isalpha(str[i]))
			temp += str[i];
		else if (str[i] == '(')
			stk.push(str[i]);
		else if (str[i] == ')')
		{
			while (stk.Stacktop() != '(')
			{
				temp += stk.Stacktop();
				stk.pop();
			}
			stk.pop();
		}
		else if (isOpperator(str[i]))
		{
			while (!stk.is_Empty() && ( precedence(str[i]) <= precedence(stk.Stacktop()) ))
			{
				temp += stk.Stacktop();
				stk.pop();
			}
			stk.push(str[i]);
		}
		
		cout << "Stack = ";
		stk.printStack();
		cout << "\t\t\tThe Output = " << temp << endl;
	}

	while (!stk.is_Empty())
	{
		temp += stk.Stacktop();
		stk.pop();
	}

	return temp;
}
bool isOpperator(char op)
{
	if (op == '+' || op == '-' || op == '*' || op == '^' || op == '/' || op == '%')
		return true;
	else 
		return false;
}

int precedence(char op)
{
	if (op == '-' || op == '+' )
		return 1;
	else if (op == '%' || op == '/' || op == '*')
		return 2;
	else if (op == '^')
		return 3;
	else
		return 0;
}
