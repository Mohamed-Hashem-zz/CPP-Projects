#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <functional>
#include <algorithm>
using namespace std;

void printArray (int arr[] , int length)
{
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	    cout << endl;
}

void Array1 (int arr1[] , int length)
{
	for (size_t i = 0; i < length; i++)
	{
		arr1[i] = rand () % 15;
		cout << i + 1 << " - Enter Number :" << arr1[i] << endl;
	}
}

void Array2 (int arr2[] , int length)
{
	for (size_t i = 0; i < length; i++)
	{
		arr2[i] = rand () % 15;
		cout << i + 1 << " - Enter Number :" << arr2[i] << endl;
	}
}

void Array3 (int *arr1, int len1 , int *arr2, int len2 , int* &arr3 , int &len3)
{
	int counter = 0 ;
	len3 = len1 + len2  ;

	arr3 = new int[len3];

	for (size_t i = 0 , k = 0 ; i < len3 ; i++)
	{
		arr3[counter++] = (i < len1) ? arr1[i] : arr2[k++] ;
	}

	for (size_t i = 0; i < len3; i++)
	{ 
		for (size_t j = i + 1 ; j < len3 ;)
		{
			if (arr3[i] == arr3[j])
			{
				for (size_t k = j; k < len3 - 1; k++)
					arr3[k] = arr3[k + 1];

				len3--;
			}
			else
				j++;
		}
	}
}

int main ()
{
	speed ; srand (time (NULL));

	int *array1 = nullptr , *array2 = nullptr , *array3 = nullptr , len1 = 0 , len2 = 0 , len3 = 0;

	cout << "Enter The Length of Array1 :";
	cin >> len1;
	array1 = new int[len1];
	Array1 (array1 , len1);

	cout << "\n----------------------------------\n";

	cout << "Enter The Length of Array2 :";
	cin >> len2;
	array2 = new int[len2];
	Array2 (array2 , len2);
	cout << "\n--------------------------------------\n";

	Array3 (array1 , len1 , array2 , len2 , array3 , len3);

	sort (array3 , array3 + len3);

	printArray (array3 , len3);

	delete[] array1;
	delete[] array2;
	delete[] array3;

	return 0;
}