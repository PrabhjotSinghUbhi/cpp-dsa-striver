#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
using namespace std;

// better.
int longestSubarray(vector<int> &nums, int k)
{
    int sum = 0;
    int maxLen = 0;
    map<int, int> preSum;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1); // zero based indexing.
        }
        int remaining = sum - k;
        if (preSum.find(remaining) != preSum.end())
        {
            maxLen = max(maxLen, i - preSum[remaining]);
        }
        preSum[sum] = i;
    }
    return maxLen;
}

// optimal.
int longestSubarray2(vector<int> &nums, int k)
{
    int left = 0, right = 0, sum = 0, maxLen = 0;
    while (right < nums.size())
    {
        sum += nums[right];
        while (sum > k && left <= right)
        {
            sum -= nums[left++];
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}

int main()
{
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout << longestSubarray2(nums, k);
    return 0;
}