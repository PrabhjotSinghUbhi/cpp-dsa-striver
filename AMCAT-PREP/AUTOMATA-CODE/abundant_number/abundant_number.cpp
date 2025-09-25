#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

void print(bool b, int n)
{
    if (b)
        cout << n << " is a Abundant number." << endl;
    else
        cout << n << " is not a Abundant number." << endl;
}

bool isAbundant(int num)
{
    int ds = 0;
    for (int i = 1; i < num; i++)
    {
        if (num % i == 0)
            ds += i;
    }
    return ds > num;
}

int main()
{
    int num = 12;
    print(isAbundant(num), num);
    return 0;
}