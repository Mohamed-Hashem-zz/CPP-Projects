#include <iostream>
using namespace std;

void swap(int & , int &);
void QuickSort(int[] , int , int);
int Partion(int[] , int , int);

int main()
{
	const int length = 10;

	int arr[length] = {37 , 2 , 6 , 4 , 89 , 8 , 10 , 12 , 68 , 45};

	cout << "The Array Before Sorting : ";
	for(int i = 0; i < length; i++)
		cout << arr[i] << ' ';

	cout << endl;

	QuickSort(arr , 0 , length - 1);

	cout << "The Array After Sorting  : ";
	for(int i = 0; i < length; i++)
		cout << arr[i] << ' ';

	cout << endl;
	return 0;
}

void swap(int &a , int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int partition(int arr[], int start, int end)
 {
    int pivot = arr[start];  // value of pivot
    int wi = start;        // working index ()

    for (int j = start + 1; j <= end; ++j) {
        if (arr[j] <= pivot) {
            ++wi;
            swap(arr[j], arr[wi]);
        }
    }
    swap(arr[wi], arr[start]);

    return wi;
}

void QuickSort(int a[], int start, int end) {
    // base case
    if (start < end) {
        // middle = subscript of sorted element
        int pivot = partition(a, start, end);

        // sort beginning
        QuickSort(a, start, pivot - 1);
        // sort end
        QuickSort(a, pivot + 1, end);
    }
}
