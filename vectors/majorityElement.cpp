#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> nums)
{
    int size = nums.size();
    int point = floor(size / 2);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (nums[i] == nums[j])
            {
                count++;
            }
        }
        if (count > point)
        {
            return nums[i];
        }
        else
        {
            count = 0;
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