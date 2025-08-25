#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

void parseBoolean(int b)
{
    if (b == 1)
        cout << "true";
    else
        cout << "false";
}

int main()
{
    int num = 7;
    for (int i = 1; i < 50; i++)
    {
        if (checkPrime(i))
        {
            cout << i << " ";
        }
    }
    return 0;
}