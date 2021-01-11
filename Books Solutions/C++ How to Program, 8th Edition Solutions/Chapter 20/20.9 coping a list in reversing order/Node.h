#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node
{
public:
	Node <T> *nextPtr;
	T data;

	Node(T );

	T getData() const;

	~Node();
};
template <class T>
Node <T>::Node(T value) :nextPtr(nullptr) , data(value){	}

template <class T>
T Node <T>::getData() const { return data; }

template <class T>
Node <T>::~Node() { delete nextPtr; }
