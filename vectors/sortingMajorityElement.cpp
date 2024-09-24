#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> nums)
{
    int n = nums.size();

    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            freq++;
        }
        else
        {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n / 2)
        {
            return ans;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1, 2, 2, 1, 1};
    int mj = majorityElement(nums);
    if (mj == -1)
    {
        cout << "No majority element available." << endl;
    }
    else
    {
        cout << "majority element : " << mj << endl;
    }
    return 0;
}