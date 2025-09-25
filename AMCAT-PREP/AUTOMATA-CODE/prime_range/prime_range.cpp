#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

bool isPrime(int num)
{
    if(num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int start, end;
    cout << "Prime number from : ";
    cin >> start;
    cout << endl;
    cout << "To : ";
    cin >> end;
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    return 0;
}