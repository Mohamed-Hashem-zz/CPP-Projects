#include <iostream>
#include <sstream>
#include <string>

#include "Tree.h"

using namespace std;

template <class T>
void removeDublicated(T *arr , int &length)
{
	int counter = 0;
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = i + 1; j < length;)
		{
			if (arr[i] == arr[j])
			{
				counter++;
				for (size_t k = j; k < length; k++)
				{
					arr[k] = arr[k + 1];
				}
				--length;
			}
			else
				j++;

		}
	}
}

template <class T>
void Print(T *arr , int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	Tree <int> tr;
	int length = 0;
	
	cout << "Enter th Length of the array and Tree : ";
	cin >> length;
	int *arr = new int[length];

	cout << "Enter Elements : " << endl;
	for (size_t i = 0; i < length; i++)
	{
		cin >> arr[i];
		tr.insert(arr[i]);
	}

	removeDublicated(arr , length);

	Print(arr , length);

	tr.inOrder();
	cout << endl;

	tr.preOrder();
	cout << endl;

	tr.postOrder();
	cout << endl;
	return 0;
}