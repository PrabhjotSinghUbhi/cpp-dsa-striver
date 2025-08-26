#include <iostream>
using namespace std;

void bubbleSort(int nums[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap(nums[j], nums[j + 1]);
            }
        }
    }
}

int main()
{
    int arr1[] = {10, 9, 8, 7, 6};
    bubbleSort(arr1, 5);
    for (auto i : arr1)
        cout << i << " ";
    cout << endl;

    int arr2[] = {1, 2, 3, 4, 5};
    bubbleSort(arr2, 5);
    for (auto i : arr2)
        cout << i << " ";
    cout << endl;
    return 0;
}