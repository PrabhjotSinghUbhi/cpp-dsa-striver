#include <iostream>
#include <vector>
using namespace std;

// Hoare Partition
void quickHoareSort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;

    // int mid = low + (high - low) / 2;
    int pivot = arr[low];
    int i = low;
    int j = high;

    while (i <= j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i <= j)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    quickHoareSort(arr, low, j);
    quickHoareSort(arr, i, high);
}

int partition(vector<int> &arr, int start, int end)
{
    int pivot = arr[end]; // pivot = last element
    int i = start - 1;    // place for smaller elements

    for (int j = start; j < end; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[end]); // place pivot in correct position
    return i + 1;               // return pivot index
}

// Lomuto’s partition.
void quickLomutoSort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int p = partition(arr, start, end); // partition index
        quickLomutoSort(arr, start, p - 1); // left side
        quickLomutoSort(arr, p + 1, end);   // right side
    }
}

int main()
{
    vector<int> vec = {3, 5, 2, 6, 9, 8, 7};
    quickHoareSort(vec, 0, vec.size() - 1);
    for (const auto &i : vec)
        cout << i << " ";
    return 0;
}