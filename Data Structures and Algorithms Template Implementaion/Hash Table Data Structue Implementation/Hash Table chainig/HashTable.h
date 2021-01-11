#include <iostream>
#include <list>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

template <class T>
class HashTable
{
private:

	int tableSize;
	int number_of_elements;
	T lastELement; // return the last elemet inserted in array

	list<T> *arr; // the array of lists

	int strings_HashFunction(const string ); // to hash Strings
	int numbers_HashFunction(const T);    // to hash Numbers

	int nextPrime(int); // to know the prime number to make it the table size to make insert operation easy
	bool isPrime(int);
	void make_Empty();

	void set_TableSize(int);

	bool loadFactor(); // to know the number in the hashTable

	void rehash();

public:
	HashTable(int s = 10);

	int get_TableSize();
	int get_Number_OfElements();

	T get_LastElement();

	void insert(const T);
	bool remove(const T);
	bool search(const T);
	int findPostion(T);

	void print();

	~HashTable();
};

template <class T>
HashTable<T>::HashTable(int s) 
{
	set_TableSize(s);
	s = get_TableSize();
	arr = new list <T>[s];

	number_of_elements = 0;
	make_Empty();
}

template<class T>
void HashTable<T>::set_TableSize(int value)
{
	tableSize = nextPrime(value);
}

template<class T>
int HashTable<T>::get_TableSize()
{
	return tableSize;
}

template<class T>
inline T HashTable<T>::get_LastElement()
{
	return lastELement;
}

template<class T>
inline int HashTable<T>::get_Number_OfElements()
{
	return number_of_elements;
}

template <class T>
void HashTable<T>::insert(const T data)
{
	int hash_index = numbers_HashFunction(data);
	arr[hash_index].push_back(data);

	if(loadFactor())
		rehash();
	
	lastELement = data;
	number_of_elements++;
}

template <class T>
bool HashTable<T>::remove(const T data)
{
	int hash_index = numbers_HashFunction(data );
	list<T> lst = arr[hash_index].begin();

	auto it = find(lst.begin() , lst.end() , data);

	if(it == lst.end())
		return false;
	else
	{
		lst.erase(it);
		number_of_elements--;
		return true;
	}
}

template <class T>
bool HashTable<T>::search(const T data)
{
	int hash_index = numbers_HashFunction(data);
	list <T> lst = arr[hash_index];
	auto it = find(lst.begin() , lst.end() , data);

	if(it != lst.end())
		return true;
	else
		return false;
}

template<class T>
inline int HashTable<T>::findPostion(T value)
{
	int hash_index = numbers_HashFunction(value);
	auto it = find(arr[hash_index].begin() , arr[hash_index].end() , value);

	if(it != arr[hash_index].end())
		return hash_index;
	else 
		return -1;
}

template <class T>
int HashTable<T>::strings_HashFunction(const string str)
{
	long long hashValue = 0;

	for(size_t i = 0; i < str.length(); i++)
		hashValue += str[i] - 'a';

	return hashValue % tableSize;
}

template<class T>
int HashTable<T>::numbers_HashFunction(const T num)
{
	return num % tableSize;
}

template<class T>
int HashTable<T>::nextPrime(int num)
{
	bool found = false;

	if(isPrime(num))
		return num;
	else 
		while(!found)
		{
			num++;

			if(isPrime(num))
				found = true;
		}

	return num;
}

template<class T>
bool HashTable<T>::isPrime(int num)
{
	bool flag = true;

	for(int i = 2; i <= num / 2; i++)
	{
		if(num % i == 0)
		{
			flag = false;
			break;
		}
	}
	return flag;
}

template<class T>
inline void HashTable<T>::make_Empty()
{
	for(size_t i = 0; i < tableSize; i++)
		arr[i].clear();
}

template<class T>
inline bool HashTable<T>::loadFactor()
{
	return number_of_elements >= tableSize / 2;
}

template<class T>
inline void HashTable<T>::rehash()
{
		list <T> *temp = arr;
		int oldSize = tableSize;

		make_Empty(); // to make the default array is empty.

		tableSize = nextPrime(tableSize * 2);

		temp->resize(tableSize);

		for(size_t i = 0; i < oldSize; i++)
		{
			if(temp[i].begin() != temp[i].end())
			{
				for(auto iter = temp[i].begin(); iter != temp[i].end(); ++iter)
					insert(*iter);
			}
		}

		delete[] arr;
		arr = temp;
}

template <class T>
void HashTable<T>::print()
{
	for(int i = 0; i < tableSize; i++)
	{
		cout << i;

		for(auto x : arr[i])
			cout << " --> " << x;

		cout << endl;
	}
}

template <class T>
HashTable<T>::~HashTable()
{
	make_Empty();
	tableSize = 0;
	number_of_elements=0;
	delete [] arr;
}