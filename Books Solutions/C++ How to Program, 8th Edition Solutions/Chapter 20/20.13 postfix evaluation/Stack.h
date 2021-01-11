#include "LinkedList.h"

template <class T>
class Stack : private LinkedList <T>
{
public:
	void push(T);
	void pop();
	bool is_Empty();
	void print();
	T top();
};

template <class T>
void Stack<T>::push(T value)
{
	this->insert_at_front(value);
}

template <class T>
void Stack<T>::pop()
{
	this->remove_from_Front();
}

template <class T>
bool Stack<T>::is_Empty()
{
	return this->isEmpty();
}

template <class T>
void Stack<T>::print()
{
	this->display();
}

template <class T>
T Stack<T>::top()
{
	return this->head->getData();
}