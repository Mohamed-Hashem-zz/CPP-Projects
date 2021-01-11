#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node
{
public:
	Node <T> *nextPtr;
	T data;

	Node(T value) :nextPtr(nullptr) , data(value) {}
	~Node() { delete nextPtr; }
};

