#include <iostream>
#include <vector>

using namespace std;

vector<int> pairSum(vector<int> num, int sum)
{
    int size = num.size();
    int start = 0;
    int end = size - 1;
    vector<int> pair;

    for (int i = 0; i < size; i++)
    {
        if ((num[start] + num[end]) == sum)
        {
            pair.push_back(start);
            pair.push_back(end);
        }
        else if ((num[start] + num[end]) > sum)
        {
            end--;
        }
        else
        {
            start++;
        }
    }
    return pair;
}

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = pairSum(nums, 26);

    cout << nums[ans[0]] << " " << nums[ans[1]] << endl;

    return 0;
}