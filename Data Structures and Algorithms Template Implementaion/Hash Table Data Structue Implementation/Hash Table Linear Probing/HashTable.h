#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <iterator>
using namespace std;

template <class T>
class HashTable
{
private:

	int tableSize;
	int number_of_elements;
	T lastELement; // return the last elemet inserted in array
	vector <T> arr; // the array of lists

	int strings_HashFunction(const string , int); // to hash Strings
	int numbers_HashFunction(const T , int);    // to hash Numbers

	int nextPrime(int); // to know the prime number to make it the table size to make insert operation easy
	bool isPrime(int);
	
	bool loadFactor();
	void rehash();

public:
	HashTable(int s = 10);

	void set_TableSize(int);
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
	tableSize = 0;
	number_of_elements = 0;
	arr.clear();
	set_TableSize(s);
}

template<class T>
void HashTable<T>::set_TableSize(int value)
{
	tableSize = nextPrime(value);

	for(size_t i = 0; i < tableSize; i++)
		arr.push_back(-1);
}

template<class T>
inline T HashTable<T>::get_LastElement()
{
	return lastELement;
}

template<class T>
int HashTable<T>::get_TableSize()
{
	return tableSize;
}

template<class T>
inline int HashTable<T>::get_Number_OfElements()
{
	return number_of_elements;
}

template <class T>
void HashTable<T>::insert(const T data)
{
	bool flag = false;

	if(loadFactor())
	{
		int hash_index = numbers_HashFunction(data , tableSize);

		if(arr[hash_index] == -1)
			arr[hash_index] = data;	
		else
		{
			while(arr[hash_index] != -1)
			{
				hash_index++;

				if(hash_index == tableSize - 1 && !flag)
				{
					hash_index = 0;
					flag = true;
				}
			}

			arr[hash_index] = data;
		}
			lastELement = data;
			number_of_elements++;
	}
	else
	{
		rehash();

		int hash_index = numbers_HashFunction(data , tableSize);

		if(arr[hash_index] == -1)
			arr[hash_index] = data;
		else
		{
			while(arr[hash_index] != -1)
			{
				hash_index++;

				if(hash_index == tableSize - 1 && !flag)
				{
					hash_index = 0;
					flag = true;
				}
			}

			arr[hash_index] = data;
		}

		lastELement = data;
		number_of_elements++;
	}
}

template <class T>
bool HashTable<T>::remove(const T data)
{
	int hash_index = numbers_HashFunction(data , tableSize);
	arr[hash_index] = -1;
	number_of_elements--;
}

template <class T>
bool HashTable<T>::search(const T data)
{
	int hash_index = numbers_HashFunction(data , tableSize);

	if(arr[hash_index] == data)
		return true;
	else
	{
		bool flag = false;

		int flag_index = hash_index - 1; // to make array circular.

		while(arr[hash_index] != data && flag_index != hash_index)
		{
			hash_index++;

			if(hash_index == tableSize - 1 && !flag)
			{
				hash_index = 0;
				flag = true;
			}
		}

		if(arr[hash_index] == data)
			return true;
		else
			return false;
	}
}

template<class T>
inline int HashTable<T>::findPostion(T value)
{
	int hash_index = numbers_HashFunction(value , tableSize);

	if(arr[hash_index] == value)
		return hash_index;
	else
	{
		bool flag = false;

		int flag_index = hash_index - 1; // to make array circular.

		while(arr[hash_index] != value && flag_index != hash_index)
		{
			hash_index++;

			if(hash_index == tableSize - 1 && !flag)
			{
				hash_index = 0;
				flag = true;
			}
		}

			if(arr[hash_index] == value)
				return hash_index;
			else
				return -1;
	}
}

template <class T>
int HashTable<T>::strings_HashFunction(const string str , int table_Size)
{
	long long hashValue = 0;

	for(size_t i = 0; i < str.length(); i++)
		hashValue += str[i] - 'a';

	return hashValue % table_Size;
}

template<class T>
int HashTable<T>::numbers_HashFunction(const T num , int table_size)
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
inline bool HashTable<T>::loadFactor()
{
	return (number_of_elements <= tableSize / 2);
}

template<class T>
inline void HashTable<T>::rehash()
{
		vector <T> temp = arr;

		tableSize *= 2;
		tableSize = nextPrime(tableSize);

		cout << tableSize << endl;

		arr.resize(tableSize);

		for(size_t i = 0; i < tableSize; i++)
			arr[i] = -1;
		
		for(size_t i = 0; i < temp.size(); i++)
		{
			if(temp[i] != -1)
				insert(temp[i]);
		}
}

template <class T>
void HashTable<T>::print()
{
	for(size_t i = 0; i < get_TableSize() ; i++)
		cout << i << " - " << arr[i] << endl;

	cout << endl;
}

template <class T>
HashTable<T>::~HashTable()
{
	arr.clear();
	tableSize = 0;
	number_of_elements=0;
}