#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> countFrequencies(vector<int> &nums)
{
    // Your code goes here
    vector<vector<int>> result;
    int hash[100] = {0};
    for (const auto &i : nums)
    {
        hash[i] += 1;
    }
    for (int i = 0; i < 100; i++)
    {
        vector<int> temp;
        if (hash[i] >= 1)
        {
            temp.push_back(i);
            temp.push_back(hash[i]);
            result.push_back(temp);
        }
    }
    return result;
}

int main()
{
    vector<int> nums = {1,2,3,2,2,3,5,6,3,4,5,7,7,7,3};
    vector<vector<int>> v = countFrequencies(nums);
    for (const auto &i : v)
    {
        for (const auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}