#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int fact(int num)
{
    int fac = 1;
    for (int i = 1; i <= num; i++)
    {
        fac *= i;
    }
    return fac;
}

bool isStrong(int num)
{
    int sum = 0;
    int temp = num;
    while (temp != 0)
    {
        int last = temp % 10;
        sum += fact(last);
        temp /= 10;
    }
    return sum == num;
}

void print(bool b, int n)
{
    if (b)
        cout << n << " is a strong number." << endl;
    else
        cout << n << " is not a strong number." << endl;
}

int main()
{
    int num = 145;
    print(isStrong(num), num);
    return 0;
}