#include <iostream>
#include <string>
#include "Vector.h"
using namespace std;

int main()
{
	Vector <int> vec(5);

	vec.push_back(10);
	vec.push_back(12);
	vec.push_back(17);
	vec.push_back(22);

	cout << "Elements : ";
	vec.print();
	cout << "Size = " << vec.getSize() << endl;
	cout << "---------------------------------------\n";

	vec.push_front(777);
	cout << "Elements : ";
	vec.print();
	cout << "Size = " << vec.getSize() << endl;
	cout << "---------------------------------------\n";

	vec.push_front(7337);
	cout << "Elements : ";
	vec.print();
	cout << "Size = " << vec.getSize() << endl;
	cout << "---------------------------------------\n";

	vec.bob_front();
	cout << "Elements : ";
	vec.print();
	cout << "Size = " << vec.getSize() << endl;
	cout << "---------------------------------------\n";

	vec.insert(3 , 333); // pos = 3, value = 333
	cout << "Elements : ";
	vec.print();
	cout << "Size = " << vec.getSize() << endl;
	cout << "---------------------------------------\n";

	vec.erase(2); // erase pos = 2	
	cout << "Elements : ";
	vec.print();
	cout << "Size = " << vec.getSize() << endl;
	cout << "---------------------------------------\n";

	vec.clear();
	cout << "Elements : ";
	vec.print();
	cout << "Size = " << vec.getSize() << endl;
	cout << "---------------------------------------\n";

	return 0;
}