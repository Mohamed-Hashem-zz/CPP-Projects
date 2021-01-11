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

	void setHead(Node<T> *);
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

	bool isEmpty();
	int length();

	void Merge(LinkedList<T> , LinkedList<T>);
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

	Node <T> *currentPtr = copy.getHead();

	while (currentPtr != nullptr)
	{
		insert_at_Back(currentPtr->data);
		currentPtr = currentPtr->nextPtr;
	}
}

template <class T>
LinkedList<T>* LinkedList<T>::operator->( ) { return this; }

template <class T>
LinkedList<T> LinkedList<T>::operator=( LinkedList<T> temp )
{
	head = nullptr;
	Node <T> * tempNode = temp->getHead();
	while (tempNode != nullptr)
	{
		insert_at_Back(tempNode->data);
		tempNode = tempNode->nextPtr;
	}
	return *this;
}

template <class T>
void LinkedList<T>::setHead(Node<T> *h)
{
	head = h;
}

template <class T>
Node<T>* LinkedList<T>::getHead()
{
	return head;
}

template <class T>
void LinkedList<T>::Merge(LinkedList<T> list1, LinkedList<T> list2)
{
	Node<T> *temp1 = list1.getHead() , *temp2 = list2.getHead();
	
	if (list1.isEmpty() && list2.isEmpty())
		return;

	while (temp1 != nullptr&& temp2 != nullptr)
	{
		if (temp1->data < temp2->data)
		{
			insert_at_Back(temp1->data);
			temp1 = temp1->nextPtr;
		}
		else
		{
			insert_at_Back(temp2->data);
			temp2 = temp2->nextPtr;
		}
	}

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
void LinkedList<T>::Concatenates(LinkedList<T> list1 , LinkedList<T> list2)
{

	Node<T> *temp1 = list1.getHead() , *temp2 = list2.getHead();

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
		setHead(newNode);
	else
	{
		Node<T> *temp = getHead();

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
		setHead(newNode);
	else
	{
		newNode->nextPtr = getHead();
		setHead(newNode);
	}
	size++;
}

template <class T>
void LinkedList<T>::insert_pos(T value , int pos)
{
	Node<T> *newNode = new Node<T>(value);

	if (pos == 0)
	{
		newNode->nextPtr = getHead();
		setHead(newNode);
	}
	else
	{
		Node<T> *temp = getHead();

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
		setHead(head->nextPtr);
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
		setHead(head->nextPtr);

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
		Node <T>* temp = getHead() , *prev = nullptr;

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
		setHead(head->nextPtr);
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
		cout << "\aThe List is Empty" ;
	else
	{
		Node<T> *temp = getHead();
		while (temp != nullptr)
		{
			cout << temp->getData() << " ";
			temp = temp->nextPtr;
		}
	}
	cout << endl;
}

template <class T>
void LinkedList<T>::reverse()
{
	Node <T> *prev = nullptr , *next = nullptr , *current = getHead();

	while (current != nullptr)
	{
		next = current->nextPtr;
		current->nextPtr = prev;
		prev = current;
		current = next;
	}
	setHead(prev);
}

template <class T>
int LinkedList<T>::length() { return size; }

template <class T>
LinkedList<T>::~LinkedList()
{
	delete head;
}