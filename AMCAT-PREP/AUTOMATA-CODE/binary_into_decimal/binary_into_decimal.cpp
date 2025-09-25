#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int btod(int n)
{
    int base = 1;
    int s = 0;
    while (n != 0)
    {
        int ld = n % 10;
        if (ld > 1)
        {
            cout << "Invalid binary" << endl;
            return -1;
        }
        s += ld * base;
        n /= 10;
        base *= 2;
    }
    return s;
}

int main()
{
    int bi;
    cin >> bi;
    cout << btod(bi) << endl;
    return 0;
}