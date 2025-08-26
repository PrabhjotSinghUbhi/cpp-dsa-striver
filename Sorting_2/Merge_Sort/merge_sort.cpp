#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(const vector<int> &left, const vector<int> &right)
{
    vector<int> result;
    int i = 0;
    int j = 0;
    while (i < left.size() && j < right.size())
    {
        if (left[i] < right[j])
        {
            result.push_back(left[i++]);
        }
        else
        {
            result.push_back(right[j++]);
        }
    }
    while (i < left.size())
        result.push_back(left[i++]);
    while (j < right.size())
        result.push_back(right[j++]);

    return result;
}

vector<int> mergeSort(const vector<int> &nums)
{

    if (nums.size() <= 1)
    {
        return nums;
    }

    int mid = nums.size() / 2;

    vector<int> left(nums.begin(), nums.begin() + mid);
    vector<int> right(nums.begin() + mid , nums.end());

    vector<int> sortedLeft = mergeSort(left);
    vector<int> sortedRight = mergeSort(right);

    return merge(sortedLeft, sortedRight);
}

int main()
{
    vector<int> nums1 = {5, 2, 4, 6, 1, 3};
    vector<int> sorted1 = mergeSort(nums1);
    for (int x : sorted1)
        cout << x << " ";
    cout << endl;

    vector<int> nums2 = {10, 9, 8, 7};
    vector<int> sorted2 = mergeSort(nums2);
    for (int x : sorted2)
        cout << x << " ";
    cout << endl;

    vector<int> nums3 = {1, 2, 3, 4, 5};
    vector<int> sorted3 = mergeSort(nums3);
    for (int x : sorted3)
        cout << x << " ";
    cout << endl;

    return 0;
}