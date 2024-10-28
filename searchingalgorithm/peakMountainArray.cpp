#include <iostream>
#include <vector>

using namespace std;

int peakElement(vector<int> &num)
{
    int st = 1, end = num.size() - 2;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (num[mid - 1] < num[mid] && num[mid] > num[mid + 1])
        {
            return mid;
        }
        if (num[mid - 1] < num[mid])
        {
            st = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{

    vector<int> nums = {0, 3, 8, 9, 5, 2};
    cout << peakElement(nums) << endl;
    return 0;
}