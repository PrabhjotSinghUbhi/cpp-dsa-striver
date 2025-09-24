#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int findGcd(pair<int, int> &gcd)
{
    // using euclidean theorem.
    while (!(gcd.first == 0 || gcd.second == 0))
    {
        if (gcd.first < gcd.second)
        {
            swap(gcd.first, gcd.second);
        }
        gcd.first %= gcd.second;
    }
    if (gcd.first != 0)
        return gcd.first;
    if (gcd.second != 0)
        return gcd.second;

    return -1;
}
int RFindGcd(pair<int, int> &gcd)
{
    // using euclidean theorem.
    if (gcd.first == 0)
    {
        return gcd.second;
    }
    else if (gcd.second == 0)
    {
        return gcd.first;
    }

    if (gcd.first < gcd.second)
    {
        swap(gcd.first, gcd.second);
    }

    gcd.first %= gcd.second;
    return RFindGcd(gcd);
}

int main()
{
    pair<int, int> gcd = {24, 60};
    cout << "GCD is " << RFindGcd(gcd) << endl;
    return 0;
}