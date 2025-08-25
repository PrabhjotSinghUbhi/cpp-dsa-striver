#include <iostream>
#include <algorithm>
using namespace std;

bool palindromeCheck(string &s)
{
    string os = s;
    reverse(s.begin(), s.end());
    // your code goes here
    return os == s;
}

int main()
{
    string str = "aba";
    cout << palindromeCheck(str);
    return 0;
}