#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

int mostFrequentElement(vector<int> &nums)
{
    int hash[20] = {0};
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        hash[nums[i]] += 1;
    }
    int mxF = INT_MIN;
    int mxFE = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (hash[nums[i]] > mxF)
        {
            mxF = hash[nums[i]];
            mxFE = nums[i];
        }
        else if (hash[nums[i]] == mxF)
        {
            mxFE = min(mxFE, nums[i]);
        }
    }
    return mxFE;
}

int main()
{
    vector<int> nums = {2, 4, 3, 2, 5, 4};
    cout << mostFrequentElement(nums) << endl;
    return 0;
}