#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <functional>
#include <algorithm>

using namespace std;

void printArray (int *a , int length)
{
	for (size_t i = 0; i < length; i++)
		cout << a[i] << " ";
}

void OriginalArray (int arr1[] , int length)
{
	for (size_t i = 0; i < length; i++)
	{
		arr1[i] = -1000 + rand () % (1000 + 1000)  ;
		cout << i + 1 << " - Enter Number :" << arr1[i] << endl;
	}
}

void testArrays (int arr1[] , int length1 , int* &arr2 , int &positive , int* &arr3 , int &negative)
{
	positive = 0 , negative = 0 ;

	for (size_t i = 0; i < length1; i++)
	{
		if (arr1[i] > 0)
			positive++;
		else if (arr1[i] < 0)
			negative++;
	}
	arr2 = new int[positive];
	arr3 = new int[negative];

	int x = 0 , y = 0 ;

	for (size_t i = 0; i < length1; i++)
	{
		if (arr1[i] > 0)
			arr2[x++] = arr1[i];
		else if (arr1[i] < 0)
			arr3[y++] = arr1[i];
	}
}

int main ()
{
	speed;
	srand (time (NULL));

	int len1 = 0 , len2 = 0 , len3 = 0 ;
	int *positiveArray = nullptr , *negativeArray = nullptr;

	cout << "Enter Array1 Length :";
	cin >> len1;

	cout << "The Original Array :" << endl;
	int *originalArray = new int[len1];
	OriginalArray (originalArray , len1);

	cout << "---------------------------------------\n";


	testArrays (originalArray , len1 , positiveArray , len2 , negativeArray , len3);

	cout << "Positive Number : " ;
	printArray (positiveArray , len2);

	cout << "\n-------------------------------------------\n";

	cout << "Negative Number : " ;
	printArray (negativeArray , len3);

	cout << "\n-------------------------------------------";
	cout << endl;

	delete[] originalArray;
	delete[] positiveArray;
	delete[] negativeArray;

	return 0;
}