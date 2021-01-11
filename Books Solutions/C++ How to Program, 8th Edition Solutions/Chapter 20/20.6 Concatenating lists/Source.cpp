#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList <char> list1 , list2 , list3;

	string str1 , str2;
	cout << "Enter First String : ";
	cin >> str1;

	cout << "Enter Second String : ";
	cin >> str2;

	for (size_t i = 0; i < str1.length(); i++)
		list1.insert_at_Back(str1[i]);

	for (size_t i = 0; i < str2.length(); i++)
		list2.insert_at_Back(str2[i]);

	cout << "List1: ";	list1.display();

	cout << "List2: "; list2.display();
	
	list3.Concatenates(list1 , list2);
	list3.display();

	return 0;
}