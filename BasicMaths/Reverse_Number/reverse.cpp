#include <iostream>
using namespace std;

int reverse(int num)
{
    int r = 0;
    while (num != 0)
    {
        int l = num % 10;
        r = (r * 10) + l;
        num /= 10;
    }
    return r;
}

int main()
{
    int num = 1234;
    cout << reverse(num);
    return 0;
}