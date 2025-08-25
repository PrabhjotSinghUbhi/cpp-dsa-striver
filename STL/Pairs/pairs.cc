#include <iostream>
using namespace std;

void print()
{
    cout << "Hello" << endl;
}

int main()
{
    pair<int, pair<int, int>> p = {1, {3, 5}};
    cout << p.second.first;

    return 0;
}