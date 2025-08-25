#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v = {1, 2, 3, 4, 5, 6};
    v.emplace_back(3);

    // for (vector<int>::iterator it = v.begin(); it != v.end(); it += 1)
    //     cout << *it << " ";

    // for (auto it = v.begin(); it != v.end(); it++)
    //     cout << *it << " ";

    // v.erase(v.begin() + 1, v.begin() + 4);

    // cout << endl;

    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }

    // v.pop_back();

    // vector<int> v1 = {10, 20};
    // vector<int> v2 = {30, 40};

    // v1.swap(v2);

    // for (auto &&i : v1)
    // {
    //     cout << i << " ";
    // }

    int num = 15;
    int setBits = __builtin_popcount(num);

    cout << setBits;

    return 0;
}