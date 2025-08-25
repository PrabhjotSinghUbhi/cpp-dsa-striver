#include <iostream>
#include <cmath>
using namespace std;

int raise(int n, int x)
{
    int pow = 1;
    for (int i = 0; i < x; i++)
    {
        pow *= n;
    }
    return pow;
}

bool isArmstrong(int n)
{
    int d = n == 0 ? 1 : (int)(log10(abs(n)) + 1);

    int t = n;
    int arm = 0;

    while (t > 0)
    {
        int ld = t % 10;
        arm += raise(ld, d);
        t /= 10;
    }

    return arm == n;
}

void parseBoolean(int b)
{
    if (b == 1)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

int main()
{
    parseBoolean(isArmstrong(1634));
    
    return 0;
}