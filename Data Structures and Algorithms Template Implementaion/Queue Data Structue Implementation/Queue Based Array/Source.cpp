#include <iostream>
#include <string>
using namespace std;

template<class T>

class Queue
{
private:
	T *arr;
	int front;
	int real;
	int length;

	void extentSize()
	{
			length *= 2;

			int *temp = new int[length];

			for (size_t i = 0; i < length / 2; i++)
				temp[i] = arr[i];

			delete arr;
			arr = temp;		
	}

public:

	Queue()
	{
		length = 10;

		arr = new T [length];
		front = -1;
		real = -1;
	}

	Queue(int size)
	{
		if (size < 0)
			length = 10;
		else
			length = size;

		arr = new T[length];
		front = -1;
		real = -1;
	}

	void enqueue(T value)
	{
		if (isEmpty())
		{
			real = front = 0;
			arr[front] = value;
		}
		else if (isFull())
			extentSize();
		else if (real == length - 1)
			real = 0;
		else
			real++;
		
			arr[real] = value;
	}

	void dequeue()
	{
		if (isEmpty())
			cout << "\aThe Queue is Empty " << endl;
		else if (front == real) // when there are one element
			front = real = -1;
		else if (front == length - 1)
			front = 0;
		else
			front++;
	}

	bool isEmpty()
	{
		return real == -1;
	}

	bool isFull()
	{
		return ( real + 1 ) % length == front;
	}

	T Front()
	{
		if (isEmpty())
			cout << "\aThe Queue is Empty" << endl;
		else
			return arr[front];
	}

	void print()
	{
		if (front == -1)
			cout << "The Queue is empty" << endl;
		else if ( real >= front)
		{
			for (size_t i = front; i <= real; i++)
				cout << arr[i] << ' ';
		}
		else
		{
			for (int i = front; i < length; i++)
				cout << arr[i] << ' ';

			for (int i = 0; i <= real; i++)
				cout << arr[i] << ' ';
		}
		cout << endl;
	}

	~Queue()
	{
		delete[] arr;
	}
};
int main()
{

	Queue <int> q(5);

	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
	q.enqueue(5);
	
	q.print();

	cout << endl;

	q.dequeue();

	q.print();

	cout << q.Front() << endl;

	q.enqueue(7);

	q.print();

	return 0;
}