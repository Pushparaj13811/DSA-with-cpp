#include <iostream>

using namespace std;

int maxRowSum(int arr[][10], int rows, int cols)
{
    int maxSum = INT_MIN;

    for (int i = 0; i < rows; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main()
{
    int arr[3][10] = {{1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
                      {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
                      {21, 22, 23, 24, 25, 26, 27, 28, 29, 30}};
    cout << maxRowSum(arr, 3, 10) << endl;
    return 0;
}