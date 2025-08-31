#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void countSort(vector<int> &arr)
{
    if (arr.empty())
        return;
    int max = *max_element(arr.begin(), arr.end());
    vector<int> freq(max + 1, 0);
    for (int i = 0; i < arr.size(); i++)
        freq[arr[i]]++;

    int index = 0;
    for (int i = 0; i <= max; i++)
    {
        while (freq[i] > 0)
        {
            arr[index++] = i;
            freq[i]--;
        }
    }
}

int main()
{
    vector<int> arr = {4, 2, 3, 5, 6, 7, 2, 1, 6};
    countSort(arr);
    for (auto &i : arr)
        cout << i << " ";
    return 0;
}