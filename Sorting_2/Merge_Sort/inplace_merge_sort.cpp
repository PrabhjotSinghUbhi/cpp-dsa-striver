#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end)
{
    int i = start;
    int j = mid + 1;
    vector<int> mix;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            mix.push_back(arr[i++]);
        }
        else
        {
            mix.push_back(arr[j++]);
        }
    }

    while (i <= mid)
        mix.push_back(arr[i++]);
    while (j <= end)
        mix.push_back(arr[j++]);

    for (int l = start; l <= end; l++)
    {
        arr[l] = mix[l - start];
    }
}

void mergeSort(vector<int> &nums, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int mid = start + (end - start) / 2;

    mergeSort(nums, start, mid);
    mergeSort(nums, mid + 1, end);

    merge(nums, start, mid, end);
}

int main()
{
    vector<int> nums1 = {5, 2, 4, 6, 1, 3};
    mergeSort(nums1, 0, nums1.size() - 1);
    for (int x : nums1)
        cout << x << " ";
    cout << endl;

    vector<int> nums2 = {10, 9, 8, 7};
    mergeSort(nums2, 0, nums2.size() - 1);
    for (int x : nums2)
        cout << x << " ";
    cout << endl;

    vector<int> nums3 = {1, 2, 3, 4, 5};
    mergeSort(nums3, 0, nums3.size() - 1);
    for (int x : nums3)
        cout << x << " ";
    cout << endl;

    return 0;
}