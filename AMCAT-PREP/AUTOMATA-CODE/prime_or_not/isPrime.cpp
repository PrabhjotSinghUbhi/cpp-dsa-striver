#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1) // prime numbers are natural numbers greater than 1.
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void print(bool b, int n)
{
    if (b == true)
    {
        cout << n << " is a prime number.";
    }
    else
    {
        cout << n << " is not a prime number.";
    }
}

int main()
{
    int num = 9;
    print(isPrime(num), num);
    return 0;
}