#include <iostream>
using namespace std;

int i = 0;
void bsSort(int arr[], int size)
{
    if (size == 1)
        return;

    for (int j = 0; j < size - 1; j++)
    {
        if (arr[j] > arr[j + 1])
        {
            swap(arr[j], arr[j + 1]);
        }
    }

    bsSort(arr, size - 1);
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    bsSort(arr, (sizeof(arr) / sizeof(arr[0])));
    for (int i : arr)
        cout << i << " ";
    return 0;
}