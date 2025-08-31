#include <iostream>
#include <vector>
using namespace std;

void iSort(vector<int> &arr, int n)
{
    if (n <= 1)
        return;
    iSort(arr, n - 1);

    int last = arr[n - 1];
    int j = n - 2;
    while (j >= 0 && arr[j] > last)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = last;
}

int main()
{
    vector<int> v = {5, 4, 3, 2, 1};
    iSort(v, v.size());
    for (const auto &i : v)
        cout << i << " ";
    return 0;
}