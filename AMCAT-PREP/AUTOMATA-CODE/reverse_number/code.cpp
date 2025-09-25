#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int reverseNum(int num)
{
    int sum = 0;
    while (num != 0)
    {
        int ld = num % 10;
        sum = (sum * 10) + ld;
        num /= 10;
    }
    return sum;
}

int main()
{
    int num = 13579;
    cout << reverseNum(num);
    return 0;
}