#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int findSecondLargest(vector<int> vec)
{
    int largest = *max_element(vec.begin(), vec.end());
    int temp = INT_MIN;
    for (int i = 0; i < vec.size(); i++)
    {
        if (temp < vec[i] && vec[i] != largest)
        {
            temp = vec[i];
        }
    }
    if (temp != INT_MIN)
    {
        return temp;
    }
    return -1;
}

int main()
{
    vector<int> v = {10, 10, 10, 10};
    const result = findSecondLargest(v);
    if (result == -1)
    {
        cout << "There is no second largest element in the array." << endl;
    }
    else
    {
        cout << "Second largest element : " << result << endl;
    }
    return 0;
}

/*
time complexity analysis-
    1. first loop to find out the largest. -> n + 1
    2. second loop to find out the second largest -> n + 1

    total -> O(n + 1 + n + 1) -> O(n)
*/