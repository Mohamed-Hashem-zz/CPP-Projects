#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <vector >

using namespace std;

void Print(const int * , int);

void QuickSort(int [] , int , int);
int  Partion(int [] , int , int);

int main()
{
	srand(time(0));

	const int length = 10;
	int arr[length];

	for (size_t i = 0; i < length; i++)
		arr[i] = 10 + rand() % 90;

	cout << "Array before swap : ";
	Print(arr , length);

	QuickSort(arr , 0 , length - 1);

	cout << "Array After swap  : ";
	Print(arr , length);

	cout << endl;

	return 0;
}

void Print(const int *arr , int size)
{
	for (size_t i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

void QuickSort(int arr[] , int left , int right)
{
	if (left < right)
	{
		int Pivot = Partion(arr , left , right);

		QuickSort(arr , left , Pivot - 1);
		QuickSort(arr , Pivot + 1 , right);
	}

}

int  Partion(int arr[] , int left , int right)
{
	int Pivot = arr[right] , j = left;

	for (size_t i = left; i < right; i++)
	{
		if (arr[i] < Pivot)
		{
			swap(arr[i] , arr[j]);
			j++;
		}
	}

	swap(arr[right] , arr[j]);
	return j;
}