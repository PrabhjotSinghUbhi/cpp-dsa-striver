#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

void print(const vector<int> &v)
{
    for (const auto &i : v)
        cout << i << " ";
    
    cout << endl;
}

vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> result;
    int i = 0, j = 0;
    int n1 = nums1.size(), n2 = nums2.size();

    while (i < n1 && j < n2)
    {
        if (nums1[i] < nums2[j])
        {
            if (result.empty() || result.back() != nums1[i])
                result.emplace_back(nums1[i]);
            i++;
        }
        else if (nums2[j] < nums1[i])
        {
            if (result.empty() || result.back() != nums2[j])
                result.emplace_back(nums2[j]);
            j++;
        }
        else
        {
            // nums1[i] == nums2[j]
            if (result.empty() || result.back() != nums1[i])
                result.emplace_back(nums1[i]);
            i++;
            j++;
        }
    }

    while (i < n1)
    {
        if (result.empty() || result.back() != nums1[i])
            result.emplace_back(nums1[i]);
        i++;
    }

    while (j < n2)
    {
        if (result.empty() || result.back() != nums2[j])
            result.emplace_back(nums2[j]);
        j++;
    }

    return result;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 7};
    vector<int> result = unionArray(nums1, nums2);
    print(result);
    cout << "1 2 3 4 5 7" << endl;
    return 0;
}