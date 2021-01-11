#include <iostream>
#include <string>
#include <queue>
#include "Node.h"
using namespace std;

template <class T>
class Tree
{
private:
	Node<T> * rootPtr;
	void insert_Helper(Node<T> * , T);
	void inOrder_Helper(Node<T> *);
	void postOrder_Helper(Node<T> *);
	void preOrder_Helper(Node<T> *);
	T maxValue_Helper(Node<T> *);
	T minValue_Helper(Node<T> *);
	Node<T> * remove_Helper(Node<T> * , T);
	Node<T> * search_Helper(Node<T> * , T);
	void LevelOrder_Traversal(Node<T> *);
	void outputTree_Helper(Node <T> * , int);

public:
	Tree();
	void insert(T);
	void inOrder();
	void postOrder();
	void preOrder();
	T maxValue();
	T minValue();
	void remove(T);
	void Search(T);
	void LevelOrder_Traversal();
	void outputTree();
	~Tree();
};

template <class T>
Tree<T>::Tree()
{
	rootPtr = nullptr;
}

template <class T>
void Tree<T>::insert(T value)
{
	if (rootPtr == nullptr)
		rootPtr = new Node<T>(value);
	else
		insert_Helper(rootPtr , value);

}

template <class T>
void Tree<T>::insert_Helper(Node<T> * temp , T value)
{
	if (value < temp->data)
	{
		if (temp->leftPtr == nullptr)
			temp->leftPtr = new Node<T>(value);
		else
			insert_Helper(temp->leftPtr , value);
	}
	else if (value > temp->data)
	{
		if (temp->rightPtr == nullptr)
			temp->rightPtr = new Node<T>(value);
		else
			insert_Helper(temp->rightPtr , value);
	}
	else
		cout << "\aThe Value (" << value << ") is Dublicated\n\n";
}

template <class T>
void Tree<T>::inOrder()
{
	inOrder_Helper(rootPtr);
}

template <class T>
void Tree<T>::inOrder_Helper(Node<T> *temp)
{
	if (temp != nullptr)
	{
		inOrder_Helper(temp->leftPtr);
		cout << temp->data << " ";
		inOrder_Helper(temp->rightPtr);
	}
}

template <class T>
void Tree<T>::postOrder()
{
	postOrder_Helper(rootPtr);
}

template <class T>
void Tree<T>::postOrder_Helper(Node<T> *temp)
{
	if (temp != nullptr)
	{
		postOrder_Helper(temp->leftPtr);
		postOrder_Helper(temp->rightPtr);
		cout << temp->data << " ";
	}
}

template <class T>
void  Tree<T>::preOrder()
{
	preOrder_Helper(rootPtr);
}

template <class T>
void Tree<T>::preOrder_Helper(Node<T> *temp)
{
	if (temp != nullptr)
	{
		cout << temp->data << " ";
		preOrder_Helper(temp->leftPtr);
		preOrder_Helper(temp->rightPtr);
	}
}
template <class T>
void Tree<T>::LevelOrder_Traversal()
{
	LevelOrder_Traversal(rootPtr);
}
template <class T>
void Tree<T>::LevelOrder_Traversal(Node<T> *temp)
{
	Node<T> * current = temp;
	queue <Node <T>*> q;

	q.push(current);

	while (!q.empty())
	{
		current = q.front();
		cout << current->data << " ";
		
		if (current->leftPtr != nullptr)
			q.push(current->leftPtr);

		if (current->rightPtr != nullptr)
			q.push(current->rightPtr);

		q.pop();
	}
}


template <class T>
void Tree<T>::outputTree()
{
	outputTree_Helper(rootPtr , 0);
}

template <class T>
void Tree<T>::outputTree_Helper(Node <T> *temp , int spaces)
{
	if (temp != nullptr)
	{
		if (temp->rightPtr != nullptr)
			outputTree_Helper(temp->rightPtr , spaces + 5);

		cout << setw(spaces) << ' ' << temp->data << endl;

		if (temp->leftPtr != nullptr)
			outputTree_Helper(temp->leftPtr , spaces + 5);
	}
}

template <class T>
T Tree<T>::maxValue()
{
	return maxValue_Helper(rootPtr);
}

template <class T>
T Tree<T>::maxValue_Helper(Node<T> * temp)
{
	if (temp->rightPtr == nullptr)
		return temp->data;

	return maxValue_Helper(temp->rightPtr);
}

template <class T>
T Tree<T>::minValue()
{
	return minValue_Helper(rootPtr);
}

template <class T>
T Tree<T>::minValue_Helper(Node<T> * temp)
{
	if (temp->leftPtr == nullptr)
		return temp->data;

	return minValue_Helper(temp->leftPtr);
}

template <class T>
void Tree<T>::remove(T value)
{
	rootPtr = remove_Helper(rootPtr , value);
}

template <class T>
Node<T> * Tree<T>::remove_Helper(Node <T>* temp , T value)
{
	if (temp == nullptr)
		return temp;

	if (value < temp->data)
		temp->leftPtr = remove_Helper(temp->leftPtr , value);
	else if (value > temp->data)
		temp->rightPtr = remove_Helper(temp->rightPtr , value);
	else
	{
		if (temp->leftPtr == nullptr && temp->rightPtr == nullptr)
			temp = nullptr;
		else if (temp->leftPtr == nullptr)
			temp = temp->rightPtr;
		else if (temp->rightPtr == nullptr)
			temp = temp->leftPtr;
		else
		{
			int max = maxValue_Helper(temp->leftPtr);
			temp->data = max;
			temp->leftPtr = remove_Helper(temp->leftPtr , temp->data);
		}
	}
	return temp;
}

template <class T>
void Tree<T>::Search(T value)
{
	rootPtr = search_Helper(rootPtr , value);
}

template <class T>
Node<T>* Tree<T>::search_Helper(Node <T> * temp ,T value)
{
	if (temp == nullptr)
		return 0;
	else if (value < temp->data)
		return search_Helper(temp->leftPtr , value);
	else if (value > temp->data)
		return search_Helper(temp->rightPtr , value);
	else
		return temp;
}

template <class T>
Tree<T>::~Tree()
{
	delete rootPtr;
}