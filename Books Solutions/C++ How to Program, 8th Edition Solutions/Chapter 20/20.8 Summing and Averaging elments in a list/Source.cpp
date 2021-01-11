#include <iostream>
#include <string>
#include <iomanip>
#include "LinkedList.h"
using namespace std;

template <class T>
T Sumtion(LinkedList <T> list)
{
	int sum = 0;
	Node <T> *temp = list.getHead();

	while (temp != nullptr)
	{
		sum += temp->data;
		temp = temp->nextPtr;
	}
	return sum;
}

int main()
{
	LinkedList <int> list;
	srand(time(0));

	for (size_t i = 0; i < 25; i++)
		list.insert_at_Back(rand() % 100);

	cout << "List: ";	list.display();

	float sum = Sumtion(list);
	cout << "\nThe Sumtion of The Linked List = " << sum << endl;

	cout << "\nThe Average of Sumtion of The Linked List = " << sum / list.length() << endl;
	
	cout << endl;
	return 0;
}