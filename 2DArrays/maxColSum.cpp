#include <iostream>

using namespace std;

int maxColSum(int arr[][5], int rows, int cols)
{
    int maxSum = INT_MIN;
    for (int j = 0; j < cols; j++)
    {
        int sum = 0;
        for (int i = 0; i < rows; i++)
        {
            sum += arr[i][j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main()
{
    int arr[3][5] = {{1, 2, 3, 4, 5},
                     {6, 7, 8, 9, 10},
                     {11, 12, 13, 14, 15}};
    cout << maxColSum(arr, 3, 5) << endl;
    return 0;
}