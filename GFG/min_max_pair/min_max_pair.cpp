#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main()
{
    pair<int, int> result;
    vector<int> arr = {3, 2, 1, 56, 10000, 167};
    result.first = *min_element(arr.begin(), arr.end());
    result.second = *max_element(arr.begin(), arr.end());
    cout << result.first << " " << result.second << endl;
    return 0;
}