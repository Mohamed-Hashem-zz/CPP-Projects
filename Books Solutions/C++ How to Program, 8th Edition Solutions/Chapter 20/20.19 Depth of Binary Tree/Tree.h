#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <functional>
#include <algorithm>
using namespace std;

template <class T>
class Tree
{
private:
	class Node
		{
		public:
			Node *leftPtr;
			Node *rightPtr;
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
public:
	Tree();
	void insert(T);
	int Hight_Level();
	void inOrder();
	void postOrder();
	void preOrder();
	T maxValue();
	T minValue();
	~Tree();

private:
	Node *rootPtr;
	void insert_Helper(Node * , T);
	void inOrder_Helper(Node *);
	void postOrder_Helper(Node *);
	void preOrder_Helper(Node *);
	T maxValue_Helper(Node *);
	T minValue_Helper(Node *);
	int Hight_Level_helper(Node *);

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
		rootPtr = new Node(value);
	else
		insert_Helper(rootPtr , value);

}

template <class T>
void Tree<T>::insert_Helper(Node * temp , T value)
{
	if (value < temp->data)
	{
		if (temp->leftPtr == nullptr)
			temp->leftPtr = new Node(value);
		else
			insert_Helper(temp->leftPtr , value);
	}
	else if (value > temp->data)
	{
		if (temp->rightPtr == nullptr)
			temp->rightPtr = new Node(value);
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
void Tree<T>::inOrder_Helper(Node *temp)
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
void Tree<T>::postOrder_Helper(Node *temp)
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
void Tree<T>::preOrder_Helper(Node *temp)
{
	if (temp != nullptr)
	{
		cout << temp->data << " ";
		preOrder_Helper(temp->leftPtr);
		preOrder_Helper(temp->rightPtr);
	}
}

template <class T>
T Tree<T>::maxValue()
{
	return maxValue_Helper(rootPtr);
}

template <class T>
T Tree<T>::maxValue_Helper(Node* temp)
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
T Tree<T>::minValue_Helper(Node* temp)
{
	if (temp->leftPtr == nullptr)
		return temp->data;

	return minValue_Helper(temp->leftPtr);
}

template <class T>
int Tree<T>::Hight_Level()
{
	if (rootPtr == nullptr)
		return -1;
	else
	return Hight_Level_helper(rootPtr);
}

template <class T>
int Tree<T>::Hight_Level_helper(Node *temp)
{
	if (temp == nullptr)
		return -1;

	int leftSubtree = Hight_Level_helper(temp->leftPtr);
	int rightSubtree = Hight_Level_helper(temp->rightPtr);

	return 1 + max(leftSubtree , rightSubtree);
}
template <class T>
Tree<T>::~Tree()
{
	delete rootPtr;
}

