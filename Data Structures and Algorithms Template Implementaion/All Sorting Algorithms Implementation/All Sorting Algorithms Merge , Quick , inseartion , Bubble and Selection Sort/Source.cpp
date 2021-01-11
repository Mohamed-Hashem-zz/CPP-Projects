#define speed  ios_base :: sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#include <bits\stdc++.h>
using namespace std;

void Print(const int *, int);

void SelectionSort(int[], int);

void BubbleSort(int[], int);

void InsertionSort(int[], int);

void MergeArrays(int *, int, int *, int, int[], int);
void DivideAndConqure(int[], int, int, int);
void MergeSort(int[], int, int);

void QuickSort(int[], int, int);
int  Partion(int r[], int, int);

int main()
{
	speed;
	srand(time(0));

	const int length = 10;
	int arr[length];

	for (size_t i = 0; i < length; i++)
		arr[i] = 10 + rand() % 90;

	cout << "Array before swap : ";
	Print(arr, length);

	//MergeSort(arr, 0, length - 1);

	//  SelectionSort(arr,length);

	//  BubbleSort(arr,length);

	// InsertionSort(arr,length);

	QuickSort(arr, 0, length-1);

	cout << "Array After swap  : ";
	Print(arr, length);

	cout << endl;

	return 0;
}

void Print(const int *arr, int size)
{
	for (size_t i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

void SelectionSort(int arr[], int length)
{

	for (size_t i = 0; i < 9; i++)
	{
		for (size_t j = i + 1; j < 10; j++)
		{
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
	cout << endl;
}

void BubbleSort(int arr[], int length)
{
	bool flag = false;;
	for (size_t i = 0; i < length; i++)
	{
		for (size_t j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j + 1], arr[j]), flag = true;
		}

		if (!flag)
			break;
	}
}

void InsertionSort(int arr[], int length)
{
	int index = 0, temp = 0;

	for (size_t i = 1; i < length; i++)
	{
		index = i;
		temp = arr[i];

		while (index > 0 && arr[index - 1] > temp)
		{
			arr[index] = arr[index - 1];
			index--;
		}
		arr[index] = temp;
	}
}

void MergeArrays(int *arr1, int length1, int *arr2, int length2, int arr[], int left)
{
	int i = 0, j = 0, count = left;

	while (i < length1 && j < length2)
	{
		if (arr1[i] < arr2[j])
			arr[count++] = arr1[i++];
		else
			arr[count++] = arr2[j++];
	}

	while (i < length1)
		arr[count++] = arr1[i++];

	while (j < length2)
		arr[count++] = arr2[j++];
}

void DivideAndConqure(int arr[], int left, int right, int middle)
{
	int length1 = middle - left + 1; // First Subarray [ left , middle ]
	int length2 = right - middle;   // Second Subarray ] middle , right[

	int * arr1 = new int[length1];
	int *arr2 = new int[length2];

	for (size_t i = 0; i < length1; i++)
		arr1[i] = arr[left + i];

	for (size_t i = 0; i < length2; i++)
		arr2[i] = arr[middle + 1 + i];

	MergeArrays(arr1, length1, arr2, length2, arr, left);
}

void MergeSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int middle = (right + left) / 2;

		MergeSort(arr, left, middle);
		MergeSort(arr, middle + 1, right);

		DivideAndConqure(arr, left, right, middle);
	}
}


int Partion(int arr[], int begin, int end)
{
	int pivot = arr[end], j = begin;

	for (size_t i = begin; i < end; i++)
	{
		if (arr[i] < pivot)
		{
			swap(arr[i], arr[j]);
			j++;
		}
	}
	swap(arr[j], arr[end]);
	return j;
}

void QuickSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int Pivot = Partion(arr, left, right);

		QuickSort(arr, left, Pivot - 1);
		QuickSort(arr, Pivot + 1, right);
	}
}
