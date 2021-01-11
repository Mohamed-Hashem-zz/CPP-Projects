#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList <char> list1;

	for (char i = 'a'; i < 'j'; i++)
		list1.insert_at_Back(i);

	cout << "List before Reversing: ";	
	list1.display();

	LinkedList <char> list2(list1);
	list2.reverse();

	cout << "List after Reversing : ";
	list2.display();

	return 0;
}