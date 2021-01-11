#include <iostream>
#include <string>
#include "Stack.h"
using namespace std;

int main()
{
	Stack <int > stk;
	stk.push(1);
	stk.push(2);
	stk.push(3);
	stk.push(4);
	stk.push(5);
	stk.push(6);
	stk.print();
	stk.pop();
	cout << ( ( stk.is_Empty() ) ? "YES" : "NO" ) << endl;

	stk.print();
	cout << stk.top() << endl;

	stk.pop();
	cout << stk.top() << endl;

	stk.print();

	return 0;
}