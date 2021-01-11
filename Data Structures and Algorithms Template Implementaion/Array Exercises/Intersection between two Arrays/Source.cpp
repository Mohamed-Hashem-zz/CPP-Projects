#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <functional>
#include <algorithm>

using namespace std;

void printArray (int a[] , int length)
{
	for (size_t i = 0; i < length; i++)
		cout << a[i] << " ";

	cout << endl;
}

void Array1 (int arr1[] , int length)
{
	for (size_t i = 0; i < length; i++)
	{
		arr1[i] = 1 + rand () % 16;
		cout << i + 1 << " - Enter Number :" << arr1[i] ;
		cout << endl;
	}
}

void Array2 (int arr2[] , int length)
{
	for (size_t i = 0; i < length; i++)
	{
		arr2[i] = 1 + rand () % 16;
		cout << i + 1 << " - Enter Number :" << arr2[i];
		cout << endl;
	}
}

void Array3 (int ar1[] , int length1 , int ar2[] , int length2 , int* &ar3 , int &len)
{
	len = 0 ;
	int loc = 0 , i = 0 , j = 0 ;

	for (i = 0; i < length1; i++)
	{
		for ( j = 0; j < length2; j++)
		{
			if (ar1[i] == ar2[j])
			{
				len++;
				break;
			}
		}
	}

	  ar3 = new int[len];

	for (i = 0; i < length1; i++)
	{
		for (j = 0 ; j < length2; j++)
		{
			if (ar1[i] == ar2[j])
			{
				ar3[loc] = ar1[i];
				loc++;
				break;
			}
		}
	}

	for (size_t i = 0; i < len ; i++)
	{
		for (size_t j = i + 1 ; j < len;)
		{
			if (ar3[i] == ar3[j])
			{
				for (size_t k = j; k < len - 1; k++)
					ar3[k] = ar3[k + 1];

				len--;
			}
			else
				j++;
		}
	}
}

int main ()
{
	speed;
	srand (time (NULL));

	int len1 = 0 , len2 = 0 , len3 = 0 ;

	cout << "Enter Array1 Length :";
	cin >> len1;

	cout << "Array 1 :" << endl;
	int *a1 = new int[len1];
	Array1 (a1 , len1);

	cout << "\n---------------------------------------\n" << "Array 2 :" << endl;

	cout << "Enter Array2 Length :";
	cin >> len2;

	int *a2 = new int[len2];
	Array2 (a2 , len2);

	cout << "\n---------------------------------------\n" << "Array 3 :" << endl;

	int *a3 = nullptr;

	Array3 (a1 , len1 , a2 , len2 , a3 , len3);

	sort (a3 , a3 + len3);

	printArray (a3 , len3);

	delete[] a1;
	delete[] a2;
	delete[] a3;

	return 0;
}