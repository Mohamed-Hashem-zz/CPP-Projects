#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

template <class T>
T operation(T first , T second , char op)
{
	if(op == '+')
		return first + second;
	else if(op == '-')
		return first - second;
	else if(op == '*')
		return first * second;
	else if(op == '/')
		return first / second;
	else if(op == '%')
		return (int) first % (int) second;
	else if(op == '^')
		return (int) first ^ (int) second;
	else
		return 1;
}

float EvalutePostfixExpression(string str)
{
	Stack <float> stk;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		else if (isalpha(str[i]) || isdigit(str[i]))
			stk.push(str[i] - '0');
		else
		{
			auto first = stk.top();
			stk.pop();
			auto second = stk.top();
			stk.pop();
			auto sum = operation(first , second , str[i]);
			stk.push(sum);
		}
		cout << "Stack = ";
		stk.print();
	}

	return stk.top();
}

int main()
{
	// 6 2 + 5 * 8 4 / -
	// 3 8 2 / + 5 - 
	// 6 5 2 3 + 8 * + 3 + *
	string str;
	cout << "Enter The Postfix Expression = ";
	getline(cin , str);

	cout << "\nPostfix Evalution = " << EvalutePostfixExpression(str) << endl;

	return 0;
}