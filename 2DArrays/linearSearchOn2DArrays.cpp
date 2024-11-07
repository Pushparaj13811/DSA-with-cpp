#include <iostream>

using namespace std;

pair<int, int> linearSearch(int mat[][6], int rows, int col, int key)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (mat[i][j] == key)
            {
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

int main()
{
    int mat[4][6] = {
        {10, 20, 30, 40, 50, 60},
        {11, 21, 31, 41, 51, 61},
        {12, 22, 32, 42, 52, 62},
        {13, 23, 33, 43, 53, 63}
    };

    pair<int, int> p = linearSearch(mat, 4, 6, 62);
    if (p.first != -1)
    {
        cout << "Element found at: " << p.first << " " << p.second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}