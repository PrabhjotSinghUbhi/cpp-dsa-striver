#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sSort(vector<int> &arr, int n)
{
    if (n == 1)
        return;

    int maxI = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[maxI])
        {
            maxI = i;
        }
    }
    swap(arr[maxI], arr[n - 1]);
    sSort(arr, n - 1);
}

int main()
{
    vector<int> v = {5, 4, 3, 2, 1};
    sSort(v, v.size());
    for (const auto &i : v)
        cout << i << " ";
    return 0;
}