#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int main()
{
	LinkedList <int> list1;

	list1.insert_at_front(5); // insert Value in front
	list1.insert_at_front(22);
	list1.insert_at_front(88);
	list1.insert_pos(66 , 4); //// insert Value in postion (value , postion)
	list1.insert_pos(69 , 5);
	list1.display();

	list1.insert_at_Back(10); // insert Value in back
	list1.insert_at_Back(96);
	
	list1.display();

	list1.remove_value(22);  // remove By Value
	list1.display();

	list1.remove_from_Back();  // remove Value By back
	list1.display();

	list1.remove_Value_By_Postion(4);  // remove Value by postion
	list1.display();

	cout << endl;
	return 0;
}