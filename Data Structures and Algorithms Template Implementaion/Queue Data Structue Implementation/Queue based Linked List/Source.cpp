#include <iostream>
#include <string>
#include "Queue.h"
using namespace std;

int main()
{
	Queue <int> q1;
	q1.enqueue(1);
	q1.enqueue(2);
	q1.enqueue(3);
	q1.enqueue(4);
	q1.enqueue(5);
	q1.enqueue(6);
	q1.print();
	q1.dequeue();
	q1.print();
	
	cout << q1.front() << endl;

	if (q1.search(5))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;

	cout << q1.Length() << endl;
	return 0;
}