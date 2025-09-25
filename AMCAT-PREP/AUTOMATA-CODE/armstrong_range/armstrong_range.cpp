#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

bool isArmstrong(int num)
{

    int temp = num;
    int nod = num == 0 ? 1 : (int)((log10(abs(num)) + 1));
    int sum = 0;
    while (temp != 0)
    {
        int last = temp % 10;
        sum += (int)round(pow(last, nod));
        temp /= 10;
    }

    return num == sum;
}

void printArms(int start, int end)
{

    for (int i = start; i <= end; i++)
    {
        if (isArmstrong(i))
            cout << i << ' ';
    }
}

int main()
{
    int start;
    int end;
    cout << "Armstrong from: ";
    cin >> start;
    cout << "To: ";
    cin >> end;
    printArms(start, end);
    return 0;
}