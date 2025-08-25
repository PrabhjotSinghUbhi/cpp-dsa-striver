#include <iostream>
#include <cmath>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void printDivisors(int n)
{
    set<int> s;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }
}
set<int> printDivisorSet(int n)
{
    set<int> s;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s.emplace(n / i);
            s.emplace(i);
        }
    }
    return s;
}
vector<int> divisors(int n)
{
    vector<int> vec;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            vec.push_back(i);
            if (n / i != 1)
            {
                vec.push_back(n / i);
            }
        }
    }
    sort(vec.begin(), vec.end());
    return vec;
}

int main()
{
    // set<int> d = printDivisorSet(28);
    // for (set<int>::iterator it = d.begin(); it != d.end(); it++)
    //     cout << *(it) << " ";
    // cout << endl;
    // printDivisors(28);
    vector<int> v = divisors(8);
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *(it) << " ";

    return 0;
}