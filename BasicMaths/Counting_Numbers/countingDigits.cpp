#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n)
{
    return n == 0 ? 1 : (int)log10(abs(n)) + 1; 
}

int main()  
{
    int num = 0;
    cout << countDigits(num);
    return 0;
}