#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	srand(time_t(0));

	LinkedList <int> list , list1 , list2;

	for (size_t i = 0; i < 10; i++)
	{
		list1.insert_at_Back(rand() % 100);
		list2.insert_at_Back(rand() % 100);

	}

	cout << "List1: ";	list1.display();
	cout << "List2: ";	list2.display();

	list = list.Merge_Two_Sorted_Lists(list1 , list2);
	
	list.display();
	cout << "-----------------------------------\n";
	return 0;
}