#include <iostream>
#include <string>
#include "HashTable.h"
using namespace std;


int main()
{
	int size = 10;

	HashTable<int> hash(size);

	cout << "The Table Size = " << hash.get_TableSize() << endl;

	for(size_t i = 0; i < 50; i++)
	{
		hash.insert(10 + rand() % 100 - 10);
		cout << hash.get_LastElement() << ' ';
	}

	cout << endl;
	
	hash.print();

	cout << hash.get_Number_OfElements() << endl;
	cout << hash.get_TableSize() << endl;

	cout << hash.search(11) << endl;
	cout << hash.findPostion(11) << endl;
	return 0;
}