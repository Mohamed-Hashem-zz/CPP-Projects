#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

template <class T>
class LinkedList
{
private:
	Node<T> *head;
	int size;
public:
	LinkedList();
	LinkedList(LinkedList <T> &);
	void insert_at_Back(T);
	void insert_at_front(T);
	void insert_pos(T , int);

	void remove_from_Front();
	void remove_from_Back();
	void remove_value(T);
	void remove_Value_By_Postion(int);

	void display();
	void reverse();

	bool isEmpty();
	int length();

	void Concatenates(LinkedList<T> , LinkedList<T>);
	LinkedList<T>* operator->( ) { return this; }

	~LinkedList();
};

template <class T>
LinkedList<T>::LinkedList() :head(nullptr) , size(0) {}

template <class T>
LinkedList<T>::LinkedList(LinkedList <T> & copy)
{
	this->head = nullptr;

	Node <T> *currentPtr = copy->head;

	while (currentPtr != nullptr)
	{
		insert_at_Back(currentPtr->data);
		currentPtr = currentPtr->nextPtr;
	}
}

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
	{
		newNode->nextPtr = head;
		head = newNode;
	}
	else
	{
		Node<T> *temp = head;

		for (size_t i = 0; i < pos - 1 && temp->nextPtr != nullptr; i++)
		{
			temp = temp->nextPtr;
		}

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

	if(head->data == value)
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
		return 0;
	else
		head = head->nextPtr;

	size--;
}

template <class T>
void LinkedList<T>::remove_from_Back()
{
	if (isEmpty())
		return;
	else
	{
		Node <T>* temp = head , *prev = nullptr;

		while (temp->nextPtr != nullptr)
		{
			prev = temp;
			temp = temp->nextPtr;
		}
	    	prev->nextPtr = nullptr;

			if (temp != nullptr)
				delete temp;
	}
	size--;
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
void LinkedList<T>::display()
{
	if (isEmpty())
		cout << "\aThe List is Empty" ;
	else
	{
		Node<T> *temp = head;
		while (temp != nullptr)
		{
			cout << temp->data << ' ';
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