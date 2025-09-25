#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

long long dtob(int n)
{
    int pow = 1;
    int sum = 0;
    while (n != 0)
    {
        int rem = n % 2;
        sum += rem * pow;
        pow *= 10;
        n /= 2;
    }
    return sum;
}

int main()
{
    int num;
    cin >> num;
    cout << dtob(num) << endl;
    return 0;
}