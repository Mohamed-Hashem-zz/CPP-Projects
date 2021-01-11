#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList <int> list1 , list2 , list3;
	int var;

	for (size_t i = 0; i < 4; i++)
	{
		cin >> var;
		list1.insert_at_Back(var);
	}
	for (size_t i = 0; i < 4; i++)
	{
		cin >> var;
		list2.insert_at_Back(var);
	}

	cout << "Lists before Merging" << endl;
	cout << "List1: ";	list1.display();
	cout << "List2: "; list2.display();

	cout << "Lists after Merging" << endl;

	list3.Merge(list1 , list2);
	list3.display();

	cout << endl;

	return 0;
}