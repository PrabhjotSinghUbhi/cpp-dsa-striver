#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortD(vector<vector<int>> &grid, int size, int row, int col, bool desc)
{
    vector<int> dg;
    int ir = row;
    int ic = col;
    while (row < size && col < size)
    {
        dg.push_back(grid[row++][col++]);
    }
    if (desc)
    {
        sort(dg.begin(), dg.end(), greater<int>());
    }
    else
    {
        sort(dg.begin(), dg.end());
    }
    int itr = 0;

    while (ir < size && ic < size)
    {
        grid[ir++][ic++] = dg[itr++];
    }
}

vector<vector<int>> sortMatrix(vector<vector<int>> &grid)
{
    int n = grid.size();
    int row = 0;
    int col = 0;

    sortD(grid, n, 0, 0, true);
    sortD(grid, n, 0, 1, false);

    return grid;
}

int main()
{
    vector<vector<int>> grid = {
        {1, 7, 3},
        {9, 8, 2},
        {4, 5, 6}};
    sortMatrix(grid);
    for (const auto &i : grid)
    {
        for (const auto &j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}