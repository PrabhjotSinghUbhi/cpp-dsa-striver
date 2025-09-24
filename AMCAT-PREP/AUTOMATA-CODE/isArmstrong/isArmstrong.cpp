#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

bool isArmstrong(long num)
{
    // power to give.
    // check for number of digits.
    int noOfDigits = num == 0 ? 1 : (long)(log10(abs(num)) + 1);
    int sum = 0;
    long temp = num;
    while (temp != 0)
    {
        int last = temp % 10;
        sum += round(pow(last, noOfDigits));
        temp /= 10;
    }
    return num == sum;
}

void print(bool b, int n)
{
    if (b)
        cout << n << " is a armstrong number." << endl;
    else
        cout << n << " is not a armstrong number." << endl;
}

int main()
{
    long nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
                   153, 370, 371, 407,
                   1634, 8208, 9474,
                   54748, 92727, 93084,
                   548834,
                   1741725, 4210818, 9800817, 9926315,
                   24678050, 24678051, 88593477,
                   146511208, 472335975, 534494836, 912985153};
    for (auto i : nums)
        print(isArmstrong(i), i);
    return 0;
}