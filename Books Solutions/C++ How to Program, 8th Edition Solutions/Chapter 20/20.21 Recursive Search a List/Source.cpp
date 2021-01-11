#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList <int> list1;

	for (size_t i = 0; i < 10; i++)
		list1.insert_at_Back(rand() % 100);

	cout << "List1: ";	list1.display();

	cout << "-----------------------------------\n";

	Node <int> *temp = nullptr;
	int value;

	cout << "Enter Search Key :";
	cin >> value;
	temp = list1.Search(list1->getHead() , value);

	if (temp != nullptr)
		cout << "The Value ( " << value << " ) is Founder in postion ( " << temp << " )" << endl;
	else
		cout << "\aThe Value ( " << value << " ) is Founder in not Founded in List " << endl;
	cout << endl;
	return 0;
}