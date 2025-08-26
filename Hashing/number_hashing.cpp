#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5, 4, 3, 2, 4, 3, 3, 2, 1, 2, 3, 7, 8, 6, 5, 7};

    // precompute.
    int hash[10] = {0};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int num = 3;

    cout << num << " appears " << hash[num] << " times." << endl;

    return 0;
}