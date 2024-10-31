// Question: Given an array of integers representing the positions of stalls, and an integer representing the number of cows, 
// write a function to determine the largest minimum distance between any two cows placed in the stalls. 
// The function should return this largest minimum distance.


#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> arr, int minimumAllowedDistance, int cows, int n)
{
    int c = 1, lastStall = arr[0];

    for (int i = 1; i < n; i++)
    {
        if ((arr[i] - lastStall) >= minimumAllowedDistance)
        {
            c++;
            lastStall = arr[i];
        }
        if (cows == c)
        {
            return true;
        }
    }
    return false;
}

int getDistance(vector<int> arr, int cows, int n)
{
    sort(arr.begin(), arr.end());

    int st = 1, end = arr[n - 1] - arr[0], ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (isPossible(arr, mid, cows, n))
        {
            ans = mid;
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int n = 5, cows = 3;
    vector<int> arr = {1, 2, 8, 4, 9};
    cout << getDistance(arr, cows, n) << endl;
    return 0;
}