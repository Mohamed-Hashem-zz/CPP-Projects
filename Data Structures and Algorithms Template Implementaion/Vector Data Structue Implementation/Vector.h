#include <iostream>
#include <string>
using namespace std;

template <class T>
class Vector
{
private:
	int size;
	int Capacity;
	T *arr;
public:
	Vector(int size = 0);
	Vector(Vector &);
	T & operator[](int index);
	const Vector & operator=(const Vector &);
	void insert(int , T); // insert in pos x and value y
	void erase(int); // erase By indexing
	void push_back(T);
	void bob_back();
	bool isEmpty();
	bool isFull();
	void clear();
	void push_front(T);
	void bob_front();
	void extenstion();
	void print();
	int getSize();
	~Vector();
};

template<class T>
inline Vector<T>::Vector(int intial_Size) :Capacity(intial_Size + 20) , size(0) , arr(new T[Capacity])
{
	for(int i = 0; i < Capacity; i++)
		arr[i] = 0;
}

template<class T>
inline Vector<T>::Vector(Vector &vec)
{
	this->operator=(vec);
}

template<class T>
T & Vector<T>::operator[](int index)
{
	if(index >= 0 && index <= size - 1)
		return arr[index];
	else
		cout << "\aSomething Wrong" << endl;

}

template<class T>
const Vector<T> & Vector<T>::operator=(const Vector &rightVec)
{
	if(this != &rightVec)
	{
		delete[] this->arr;

		this->size = rightVec.getSize();
		this->Capacity = rightVec.Capacity;

		arr = new T[Capacity];

		for(size_t i = 0; i < size; i++)
			arr[i] = rightVec.arr[i];

	}
	return *this;
}

template<class T>
inline void Vector<T>::insert(int pos , T data)
{
	if(!isFull())
	{
		size++;

		for(size_t i = size; i >= pos ; i--)
			arr[i] = arr[i - 1];
	}
	else
		extenstion();

	arr[pos] = data;
}

template<class T>
inline void Vector<T>::erase(int pos)
{
	if(pos >= size)
		cout << "\aErasing an element out of bounds" << endl;
	else if(!isEmpty())
	{
		size--;

		for(size_t i = pos ; i < size; i++)
			arr[i] = arr[i + 1];	
	}
	else
		cout << "\aThe Vector is Empty\n";
}

template<class T>
inline void Vector<T>::push_back(T value)
{
	if(!isFull())
		arr[size++] = value;
	else
	{
		extenstion();
		arr[size++] = value;
	}
}

template<class T>
inline void Vector<T>::bob_back()
{
	if(!isEmpty())
		arr[size--];
	else
		cout << "\aThe Vector is Empty\n";
}

template<class T>
inline void Vector<T>::extenstion()
{
	if(isFull())
	{
		Capacity = size * 2;

		T *arr2 = new T[Capacity];

		for(size_t i = 0; i < size; i++)
			arr2[i] = arr[i];

		for(size_t i = size; i < Capacity; i++)
			arr2[i] = 0;

		delete[] arr;
		arr = arr2;
	}
}

template<class T>
inline void Vector<T>::print()
{
	for(size_t i = 0; i < size; i++)
		cout << arr[i] << ' ';

	cout << endl;
}

template<class T>
inline int Vector<T>::getSize()
{
	return size;
}

template<class T>
inline Vector<T>::~Vector()
{
	delete[]arr;
}

template<class T>
inline bool Vector<T>::isEmpty()
{
	return size == 0;
}

template<class T>
inline bool Vector<T>::isFull()
{
	return (size >= Capacity);
}

template<class T>
inline void Vector<T>::clear()
{
	size = 0;
	Capacity = 0;
}

template<class T>
inline void Vector<T>::push_front(T value)
{
	if(!isFull())
	{
		size++;

		for(size_t i = size; i > 0; i--)
			arr[i] = arr[i - 1];

	}
	else
	{
		extenstion();

		for(size_t i = size; i > 0; i--)
			arr[i] = arr[i - 1];
	}

	arr[0] = value;
}

template<class T>
inline void Vector<T>::bob_front()
{
	if(!isEmpty())
	{
		for(size_t i = 0; i < size; i++)
			arr[i] = arr[i + 1];

		size--;
	}
	else
		cout << "\aThe Vector is Empty\n";
}