#include <iostream>
#include <vector>

using namespace std;

int BS(vector<int> arr, int tar, int st, int en)
{
    if (st <= en)
    {
        int mid = st + (en - st) / 2;
        if (arr[mid] < tar)
        {
            return BS(arr, tar, mid + 1, en);
        }
        else if (arr[mid] > tar)
        {
            return BS(arr, tar, st, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    vector<int> nums = {1, 2, 3, 5, 6, 9, 10};
    cout << BS(nums, 6, 0, 7) << endl;
    return 0;
}