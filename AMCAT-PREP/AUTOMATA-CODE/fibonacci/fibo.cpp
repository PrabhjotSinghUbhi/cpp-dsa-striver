#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

vector<int> dp(100, -1);
int fibo(int num)
{
    if (num <= 1)
    {
        return num;
    }
    if (dp[num] != -1)
    {
        return dp[num];
    }
    dp[num] = fibo(num - 1) + fibo(num - 2);
}

int main()
{
    int n;
    cin >> n;

    int i = 0;
    while (fibo(i) <= n)
    {
        cout << fibo(i) << " ";
        i++;
    }

    return 0;
}