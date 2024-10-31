#include <iostream>
#include <vector>

using namespace std;

bool isPossible(vector<int> arr, int maxAllowedTime, int totalPainter)
{
    int painter = 1, time = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (time + arr[i] > maxAllowedTime)
        {
            painter++;
            time = arr[i];
        }
        else
        {
            time += arr[i];
        }
    }
    return painter > totalPainter ? false : true;
}

int minimumTime(vector<int> &arr, int totalPainter)
{
    int sum = 0, maxVal = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        maxVal = max(maxVal, arr[i]);
    }

    int st = maxVal, end = sum, ans = -1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isPossible(arr, mid, totalPainter))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int n, totalPainter;
    cout << "Enter number of jobs: ";
    cin >> n;
    cout << "Enter number of painters: ";
    cin >> totalPainter;

    vector<int> arr(n);
    cout << "Enter job times: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = minimumTime(arr, totalPainter);
    cout << "Minimum time required: " << result << endl;

    return 0;
}