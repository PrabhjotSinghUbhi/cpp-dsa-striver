#include <iostream>
using namespace std;

int fib(int n)
{
    // your code goes here
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    for (int i = 0; i <= 13; i++)
    {
        cout << fib(i) << " ";
    }
    return 0;
}