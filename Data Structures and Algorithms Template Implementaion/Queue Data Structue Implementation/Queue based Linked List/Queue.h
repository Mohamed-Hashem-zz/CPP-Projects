#pragma once
#include "LinkedList.h"

template <class T>
class Queue :private LinkedList<T>
{
public:
	void enqueue(T);
	void dequeue();
	T front();
	bool is_Empty();
	void print();
	bool search(T);
	int Length();
};

template <class T>
void Queue<T>::enqueue(T value)
{
	this->insert_at_Back(value);
}

template <class T>
void Queue<T>::dequeue()
{
	this->remove_from_Front();
}

template <class T>
T Queue<T>::front()
{
	return this->getHead()->getData();
}

template <class T>
bool Queue<T>::is_Empty()
{
	return this->isEmpty();
}

template <class T>
void Queue<T>::print()
{
	this->display();
}

template <class T>
bool Queue<T>::search(T value)
{
	return this->Search(value);
}

template <class T>
int Queue<T>::Length()
{
	return this->length();
}