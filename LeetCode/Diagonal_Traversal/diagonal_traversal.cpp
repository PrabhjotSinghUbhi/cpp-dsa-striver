#include <iostream>
#include <vector>
using namespace std;

vector<int> findDiagonalOrder(vector<vector<int>> &mat)
{
    vector<int> result;
    int m = mat.size();
    int n = mat[0].size();
    int row = 0;
    int col = 0;
    int dir = true;

    if (m == 1 && n == 1)
    {
        result.push_back(mat[0][0]);
        return result;
    }

    while (!(row == m - 1 && col == n - 1))
    {
        if (dir)
        {
            while (row >= 0 && col < n)
            {
                result.push_back(mat[row--][col++]);
            }

            if (row < 0)
            {
                row++;
            }
            else
            {
                col--;
                row += 2;
            }

            dir = false;
        }
        else
        {
            while (row < m && col >= 0)
            {
                result.push_back(mat[row++][col--]);
            }
            if (row >= m)
            {
                row--;
                col += 2;
            }
            else
            {
                col++;
            }
            dir = true;
        }
        if (row == m - 1 && col == n - 1)
        {
            result.push_back(mat[row][col]);
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> mat = {
        {{1}}};

    vector<int> result = findDiagonalOrder(mat);

    for (auto i : result)
        cout << i << " ";

    return 0;
}