#include <iostream>
using namespace std;

int findGCD(int num1, int num2)
{
    int gcd = 1;
    for (int i = min(num1, num2); i > 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }
    return gcd;
}

int findHCF(int n1, int n2)
{

    if (n1 <= 0)
    {
        return n2;
    }
    if (n2 <= 0)
    {
        return n1;
    }

    if (n1 < n2)
    {
        findHCF(n2 % n1, n1);
    }
    else
    {
        findHCF(n1 % n2, n2);
    }
}

int GCD(int n1, int n2)
{
    if (n1 <= 0)
    {
        return n2;
    }
    if (n2 <= 0)
    {
        return n1;
    }
    if (n1 > n2)
    {
        return GCD(n1 % n2, n2);
    }
    else
    {
        return GCD(n2 % n1, n1);
    }
}

int main()
{
    int num1 = 13;
    int num2 = 11;
    cout << GCD(6, 12) << endl;

    return 0;
}