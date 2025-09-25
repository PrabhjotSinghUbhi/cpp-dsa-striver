#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

long long OtoD(int n)
{
    int base = 1;
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum += rem * base;
        base *= 8;
        n /= 10 ;
    }
    return sum;
}

int main()
{
    int num;
    cin >> num;
    cout << OtoD(num) << endl;
    return 0;
}