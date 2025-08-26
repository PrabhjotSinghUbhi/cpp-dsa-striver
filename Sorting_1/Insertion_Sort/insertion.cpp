#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && nums[j - 1] > nums[j])
        {
            swap(nums[j], nums[j - 1]);
            j--;
        }
    }
    return nums;
}

int main()
{

    vector<int> nums1 = {5, 2, 4, 6, 1, 3};
    vector<int> sorted1 = insertionSort(nums1);
    for (int x : sorted1)
        cout << x << " ";
    cout << endl;

    vector<int> nums2 = {10, 9, 8, 7};
    vector<int> sorted2 = insertionSort(nums2);
    for (int x : sorted2)
        cout << x << " ";
    cout << endl;

    vector<int> nums3 = {1, 2, 3, 4, 5};
    vector<int> sorted3 = insertionSort(nums3);
    for (int x : sorted3)
        cout << x << " ";
    cout << endl;

    return 0;
}