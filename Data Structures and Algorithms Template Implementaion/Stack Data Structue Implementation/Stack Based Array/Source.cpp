#include <iostream>
#include <string>
#include "stack.h"
using namespace std;

int main()
{
	stack <int> stk;

	stk.push(5);
	stk.push(6);
	stk.push(7);
	stk.push(8);
	stk.push(7);
	stk.push(8);

	stk.display();
	cout << stk.length() << endl;
	cout << "----------------------------------------------\n";

	cout << stk.top() << endl;

	stk.pop();
	cout << stk.top()<<endl;

	stk.pop();
	cout << stk.top() << endl;

	stk.pop();
	cout << stk.top() << endl;

	stk.pop();
	cout << stk.top() << endl;

	stk.pop();
	cout << stk.top() << endl;

	stk.display();
	cout << stk.length() << endl;

	return 0;
}