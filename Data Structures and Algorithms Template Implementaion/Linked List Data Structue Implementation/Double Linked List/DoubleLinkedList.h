#include <iostream>
#include <string>
using namespace std;

template <class T>
class Node
{
public:
	T data;
	Node* next;
	Node* prev;

	Node(T value)
	{
		data = value;
		next = nullptr;
		prev = nullptr;
	}

	~Node()
	{
		delete next;
		delete prev;
	}
};

template <class T>
class DoubleLinkedList
{
private:
	Node <T> * head = nullptr;
	int size;

public:
	DoubleLinkedList() :head(NULL) , size(0) {}

	DoubleLinkedList (DoubleLinkedList <T> &list)
	{
		
		*this = list;
	}

	DoubleLinkedList* operator->()
	{
		return this;
	}

	DoubleLinkedList operator=(DoubleLinkedList <T> & list)
	{
		head = NULL;
		Node <T> *temp = list->head;

		while(temp != nullptr)
		{
			this->push_back(temp->data);
			temp = temp->next;
		}

		this->size = list->size;

		return *this;
	}
	
	void push_back(T value)
	{
		Node <T> *newNode = new Node<T>(value);

		if(head == nullptr)
			head = newNode;
		
		else
		{
			Node <T> * temp = head;

			while(temp->next != nullptr)
				temp = temp->next;
			
			temp->next = newNode;
			newNode->prev = temp;
		}
	}

	void insert_at_pos(T value , int pos)
	{
		Node <T> * newNode = new Node<T>(value);

		if(head == nullptr)
		{
			head = newNode;
			return;
		}

		if(pos == 0)
		{
			newNode->next = head;
			head->prev = newNode;
			head = newNode;
			return;
		}

		Node <T> * temp = head;

		for(int i = 0; i < pos && temp != nullptr; i++)
			temp = temp->next;	

		if(temp == nullptr)
		{
			this->push_back(value);
			return;
		}

		newNode->prev = temp->prev;
		temp->prev->next = newNode;
		temp->prev = newNode;
		newNode->next = temp;
	}

	void remove(T value)
	{
		if(head == nullptr)
			return;

		Node <T> * temp = head;

		if(temp->data == value)
		{
			head = temp->next;

			if(head != nullptr)
				head->prev = nullptr;

			delete temp;
			return;
		}

		while(temp != nullptr && temp->data != value)
			temp = temp->next;
		

		if(temp == nullptr)
			return;
		else
		{
			temp->prev->next = temp->next;

			if(temp->next != nullptr)
				temp->next->prev = temp->prev;

			delete temp;
		}
	}

	void remove_at_pos(int pos)
	{
		if(head == nullptr)
			return;

		Node <T> * temp = head;
		if(pos == 0)
		{
			head = temp->next;

			if(head != nullptr)
				head->prev = nullptr;

			delete temp;
			return;
		}

		for(int i = 0; i < pos && temp != nullptr; i++)
			temp = temp->next;

		if(temp == nullptr)
			return;

		temp->prev->next = temp->next;

		if(temp->next)
			temp->next->prev = temp->prev;

		delete temp;

	}

	void display()
	{
		Node <T> * temp = head;

		while(temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

	void reverse_display()
	{
		Node <T> * temp = head;

		while(temp->next != nullptr)
			temp = temp->next;
		
		//---------------------------

		while(temp != nullptr)
		{
			cout << temp->data << " ";
			temp = temp->prev;
		}
		cout << endl;
	}

	~DoubleLinkedList()
	{
		Node <T> * temp = head;
		while(head != nullptr)
		{
			head = head->next;

			delete temp;
			temp = head;
		}
	}
};