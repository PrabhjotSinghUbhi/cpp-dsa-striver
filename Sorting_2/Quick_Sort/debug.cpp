#include <iostream>
using namespace std;

int partition(int arr[], int start, int end)
{
    int i = start - 1;
    int pivot = arr[end];
    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]);
    return i + 1;
}

void quickSort(int arr[], int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end);
        quickSort(arr, start, p - 1);
        quickSort(arr, p + 1, end);
    }
}

int main()
{
    int arr[] = {5, 2, 6, 3, 9, 8, 7};
    quickSort(arr, 0, 6);
    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}