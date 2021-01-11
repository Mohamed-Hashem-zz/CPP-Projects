#include <iostream>
#include <string>
using namespace std;

template <class T>
class stack
{
private:
	T *arr;
	int size;
	int top_value;
	void extendArray();

public:
	stack();
	stack(int);
	void push(T);
	void pop();
	bool full();
	bool empty();
	T top();
	void display();
	int length();
	~stack();
};

template <class T>
stack<T>::stack() :size(0) , arr(nullptr) , top_value(-1)
{
	size = 10;
	arr = new T[size];
}

template <class T>
stack<T>::stack(int capacity) :size(0) , arr(nullptr) , top_value(-1)
{
	size = capacity;
	arr = new T[size];
}

template <class T>
void stack<T>::extendArray()
{
	size *= 2;
	int *temp = new T[size];

	for (size_t i = 0; i < size; i++)
		temp[i] = arr[i];

	delete[] arr;
	arr = temp;
}



template <class T>
void stack<T>::push(T value)
{
	if (top_value != size - 1)
	{
		top_value++;
		arr[top_value] = value;
	}
	else
	{
		extendArray();
		top_value++;
		arr[top_value] = value;
	}
}

template <class T>
void stack<T>::pop()
{
	if (empty())
		cout << "\aStack is Empty" << endl;
	else
		top_value--;
}

template <class T>
bool stack<T>::full()
{
	return ( top_value >= size - 1 );
}

template <class T>
bool stack<T>::empty()
{
	return ( top_value < 0 );
}

template <class T>
T stack<T>::top()
{
	if (empty())
		return -1;
	else
		return arr[top_value];
}

template <class T>
void stack<T>::display()
{
	if (empty())
		cout << "\aStack is Empty" << endl;
	else
	{
		cout << "Stack: ";
		int temp = top_value;

		while (temp != -1)
		{
			cout << arr[temp] << " ";
			temp--;
		}

		cout << endl;
	}
}

template <class T>
int stack<T>::length() { return top_value + 1; }

template <class T>
stack<T>::~stack()
{
	delete[] arr;
	}