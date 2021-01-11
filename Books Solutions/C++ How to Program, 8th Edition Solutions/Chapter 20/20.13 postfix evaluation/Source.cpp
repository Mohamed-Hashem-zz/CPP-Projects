#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

float calcualte(float x , float y , char ch)
{
	if (ch == '+')
		return x + y; 
	else if (ch == '-')
		return x - y;
	else if (ch == '*')
		return x * y;
	else if (ch == '/')
		return x / y;
	else if (ch == '%')
		return int(x) % int(y);
	else if (ch == '^')
		return int(x) ^ int(y);
}

float EvalutePostfixExpression(string str)
{
	Stack <float> stk;
	float sum = 0 , operand1 = 0 , operand2 = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		else if (isalpha(str[i]) || isdigit(str[i]))
			stk.push(str[i] - '0');
		else
		{
			operand2 = stk.top() ;
			stk.pop();
			operand1 = stk.top() ;
			stk.pop();

			sum = calcualte(operand1 , operand2 , str[i]);
			stk.push(sum);
		}
		cout << "Stack = ";
		stk.print();
	}
	return stk.top();
}

int main()
{
	//6 2 + 5 * 8 4 / -
	// 3 8 2 / + 5 - 

	string str;
	cout << "Enter The Postfix Expression = ";
	getline(cin , str);

	cout << "\nPostfix Evalution = " << EvalutePostfixExpression(str) << endl;

	return 0;
}