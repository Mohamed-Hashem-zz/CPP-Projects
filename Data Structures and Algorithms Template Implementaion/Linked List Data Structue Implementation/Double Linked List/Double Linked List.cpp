#include <iostream>
#include <string>
#include "DoubleLinkedList.h"
using namespace std;

int main()
{
	DoubleLinkedList<int> lst;
	lst.push_back(5);
	lst.push_back(15);
	lst.push_back(22);
	lst.push_back(33);

	DoubleLinkedList<int> lst2(lst);
	lst2.display();

	return 0;
}