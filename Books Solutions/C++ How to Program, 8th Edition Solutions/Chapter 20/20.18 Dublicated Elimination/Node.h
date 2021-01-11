#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <algorithm>
using namespace std;

template <class T>
class Node
{
public:
	Node<T> * leftPtr;
	Node<T> *rightPtr;
	T data;

	Node(T value)
	{
		data = value;
		leftPtr = nullptr;
		rightPtr = nullptr;
	}
	~Node()
	{
		delete leftPtr;
		delete rightPtr;
	}
};