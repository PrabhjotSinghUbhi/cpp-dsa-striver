#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {3, 2, 4, 0, 5};
    int maxElement = *max_element(&arr[0], &arr[5]);
    cout << maxElement << " ";
    return 0;
}