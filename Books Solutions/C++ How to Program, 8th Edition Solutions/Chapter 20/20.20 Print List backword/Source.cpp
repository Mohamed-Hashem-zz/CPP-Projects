#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList <int> list1;

	for (size_t i = 0; i < 5; i++)
		list1.insert_at_Back(rand() % 100);

	cout << "List1: ";	list1.display();

	cout << "-------------------------\n";

	Node <int> *temp = list1->getHead();

	list1.printListBackground(temp);
	cout << endl;
	return 0;
}