#include <iostream>
#include <string>
#include <stack>
using namespace std;
/* Using Map

bool BalancedParentheses(string str)
{
	stack <char> stk;

	map<char , char>mp;

	mp[')'] = '(';
	mp['}'] = '{';
	mp[']'] = '[';

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		else if (mp.count(str[i]))
		{
			if (stk.empty())
				return false;
			else if (stk.top() == mp[str[i]])
				stk.pop();
			else
				return false;
		}
		else
			stk.push(str[i]);
	}
	return stk.empty();
}
  */

bool Pair(char open , char close)
{
	if (open == '(' && close == ')')
		return true;
	else if (open == '{' && close == '}')
		return true;
	else if (open == '[' && close == ']')
		return true;
	else
		return false;
}

bool BalancedParentheses(string str)
{
	stack <char> stk;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			continue;
		else if (str[i] == '(' || str[i] == '{' || str[i] == '[')
			stk.push(str[i]);
		else if (str[i] == ')' || str[i] == '}' || str[i] == ']')
		{
			if (stk.empty())
				return false;
			else if (Pair(stk.top() , str[i]))
				stk.pop();
			else
				return false;
		}
	}
	if (stk.empty())
		return true;
	else
		return false;
}

int main()
{
	string str;
	cin >> str;

	if (BalancedParentheses(str))
		cout << "The Parantheses is Balanced" << endl;
	else
		cout << "\aThe Parantheses is not Balanced" << endl;

	return 0;
}