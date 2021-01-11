#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

template <class T>
class LinkedList
{

protected:
	Node<T> *head;
	int size;

	LinkedList();
	LinkedList(LinkedList <T> &);

	Node<T>* getHead();

	void insert_at_Back(T);
	void insert_at_front(T);
	void insert_pos(T , int);

	void remove_from_Front();
	T remove_from_Back();
	void remove_value(T);
	void remove_Value_By_Postion(int);

	void printListBackground(Node <T> *);
	void display();
	void reverse();

	bool Search(T);

	bool isEmpty();
	int length();

	LinkedList<T> Merge_Two_Sorted_Lists(LinkedList<T> , LinkedList<T>);
	void Concatenates(LinkedList<T> , LinkedList<T>);

	LinkedList<T>* operator->( );
	LinkedList<T> operator=( LinkedList<T> );

	~LinkedList();
};

template <class T>
LinkedList<T>::LinkedList() :head(nullptr) , size(0) {}

template <class T>
LinkedList<T>::LinkedList(LinkedList <T> & copy)
{
	head = nullptr;

	Node <T> *currentPtr = copy.head;

	while (currentPtr != nullptr)
	{
		insert_at_Back(currentPtr->data);
		currentPtr = currentPtr->nextPtr;
	}
}

template <class T>
LinkedList<T> LinkedList<T>::Merge_Two_Sorted_Lists(LinkedList<T> list1 , LinkedList<T> list2)
{
	Node <T> * node1 = list1.head;
	Node <T> * node2 = list2.head;

	if (node1 == nullptr)
		return list2;

	if (node2 == nullptr)
		return list1;

	while (node1 != nullptr && node2 != nullptr)
	{
		if (node1->data <  node2->data)
		{
			insert_at_Back(node1->data);
			node1 = node1->nextPtr;
		}
		else
		{
			insert_at_Back(node2->data);
			node2 = node2->nextPtr;
		}
	}

	while (node1 != nullptr)
	{
		insert_at_Back(node1->data);
		node1 = node1->nextPtr;
	}

	while (node2 != nullptr)
	{
		insert_at_Back(node2->data);
		node2 = node2->nextPtr;
	}
	return *this;
}

template <class T>
LinkedList<T>* LinkedList<T>::operator->( ) { return this; }

template <class T>
LinkedList<T> LinkedList<T>::operator=( LinkedList<T> temp )
{
	head = nullptr;
	Node <T> * tempNode = temp->head;

	while (tempNode != nullptr)
	{
		insert_at_Back(tempNode->data);
		tempNode = tempNode->nextPtr;
	}
	return *this;
}

template <class T>
Node<T>* LinkedList<T>::getHead() { return head; }

template <class T>
void LinkedList<T>::Concatenates(LinkedList<T> list1 , LinkedList<T> list2)
{
	Node<T> *temp1 = list1.head , *temp2 = list2.head;

	while (temp1 != nullptr)
	{
		insert_at_Back(temp1->data);
		temp1 = temp1->nextPtr;
	}

	while (temp2 != nullptr)
	{
		insert_at_Back(temp2->data);
		temp2 = temp2->nextPtr;
	}
}

template <class T>
bool LinkedList<T>::isEmpty()
{
	return head == nullptr;
}

template <class T>
void LinkedList<T>::insert_at_Back(T value) // append to end
{
	Node<T> *newNode = new Node<T>(value);

	if (isEmpty())
		head = newNode;
	else
	{
		Node<T> *temp = head;

		while (temp->nextPtr != nullptr)
			temp = temp->nextPtr;

		temp->nextPtr = newNode;
		newNode->nextPtr = nullptr;
	}
	size++;
}
template <class T>
void LinkedList<T>::insert_at_front(T value)
{
	Node<T> *newNode = new Node <T>(value);

	if (isEmpty())
		head = newNode;
	else
	{
		newNode->nextPtr = head;
		head = newNode;
	}
	size++;
}

template <class T>
void LinkedList<T>::insert_pos(T value , int pos)
{
	Node<T> *newNode = new Node<T>(value);

	if (pos == 0)
		newNode->nextPtr = head;
	else
	{
		Node<T> *temp = head;

		for (size_t i = 0; i < pos - 1 && temp->nextPtr != nullptr; i++)
			temp = temp->nextPtr;


		newNode->nextPtr = temp->nextPtr;
		temp->nextPtr = newNode;
	}
	size++;
}

template <class T>
void LinkedList<T>::remove_value(T value)
{
	Node<T> *temp = head , *prev = nullptr;

	if (isEmpty())
		return;

	if (head->data == value)
		head = head->nextPtr;
	else
	{
		while (temp != nullptr && temp->data != value)
		{
			prev = temp;
			temp = temp->nextPtr;
		}

		if (temp->data != value & temp == nullptr)
			return;
		else
			prev->nextPtr = temp->nextPtr;
	}
	size--;
}

template <class T>
void LinkedList<T>::remove_from_Front()
{
	if (isEmpty())
		return;
	else
		head = head->nextPtr;

	size--;
}

template <class T>
T LinkedList<T>::remove_from_Back()
{
	T value;
	if (isEmpty())
		return 0;
	else
	{
		Node <T>* temp = head , *prev = nullptr;

		while (temp->nextPtr != nullptr)
		{
			prev = temp;
			temp = temp->nextPtr;
		}

		value = prev->data;
		prev->nextPtr = nullptr;

		if (temp != nullptr)
			delete temp;
	}
	size--;
	return value;
}

template <class T>
void LinkedList<T>::remove_Value_By_Postion(int pos)
{
	if (isEmpty())
		return;

	if (pos == 0)
		head = head->nextPtr;
	else
	{
		Node<T> *temp = head;
		for (size_t i = 0; i < pos - 1 && temp->nextPtr != nullptr; i++)
		{
			temp = temp->nextPtr;
		}
		if (temp->nextPtr == nullptr)
			return;

		Node<T> *temp2 = temp->nextPtr;
		temp->nextPtr = temp2->nextPtr;
		delete temp2;
	}
	size--;
}

template <class T>
bool LinkedList<T>::Search(T value)
{
	Node <T>* temp = head;

	if (temp == nullptr)
		return false;

	while (temp != nullptr)
	{
		if (temp->data == value)
			return true;

		temp = temp->nextPtr;
	}

	return false;
}

template <class T>
void LinkedList<T>::printListBackground(Node <T> *temp)
{
	if (temp == nullptr)
		return;

	printListBackground(temp->nextPtr);
	cout << temp->data << " ";
}

template <class T>
void LinkedList<T>::display()
{
	if (isEmpty())
		cout << "\aThe List is Empty";
	else
	{
		Node<T> *temp = head;

		while (temp != nullptr)
		{
			cout << temp->data ;
			temp = temp->nextPtr;
		}
	}
	cout << endl;
}

template <class T>
void LinkedList<T>::reverse()
{
	Node <T> *prev = nullptr , *next = nullptr , *current = head;

	while (current != nullptr)
	{
		next = current->nextPtr;
		current->nextPtr = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

template <class T>
int LinkedList<T>::length() { return size; }

template <class T>
LinkedList<T>::~LinkedList()
{
	delete head;
}