#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

bool isAutomorphic(int num)
{
    int sq = num * num;
    return num == (sq % 10);
}

void print(bool b, int n)
{
    if (b)
        cout << n << " is a Automorphic number." << endl;
    else
        cout << n << " is not a Automorphic number." << endl;
}

void print(bool b, int n)
{
    if (b)
        cout << n << " is a Automorphic number." << endl;
    else
        cout << n << " is not a Automorphic number." << endl;
}