#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int left(int arr[], int n, int index)
{
    int sum = 0;
    for (int i = 0; i <= index - 1; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int right(int arr[], int n, int index)
{
    int sum = 0;
    for (int i = index + 1; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int findEqui(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int leftSum = left(arr, n, i);
        int rightSum = right(arr, n, i);

        if (leftSum == rightSum)
        {
            return arr[i];
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 3};
    cout << findEqui(arr, 6);
    return 0;
}