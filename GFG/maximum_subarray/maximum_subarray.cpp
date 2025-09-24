#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 4, 5, 2, 3, 6};
    int n = 9;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            for (int k = 0; k < j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}