#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

// this problem can easily be solved by cycle sort method.

void print(vector<int> arr)
{
    for (auto &i : arr)
        cout << i << " ";
}

void swap(vector<int> &arr, int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

int findMissing(vector<int> arr)
{
    int n = arr.size();
    int hash[n + 2] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    // find missing.
    for (int i = 1; i <= n + 1; i++)
    {
        if (hash[i] == 0)
            return i;
    }
    return -1;
}

int main()
{
    vector<int> arr = {1};
    cout << findMissing(arr) << " ";

    return 0;
}