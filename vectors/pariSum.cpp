#include <iostream>
#include <vector>

using namespace std;

vector<int> pariSum(vector<int> num, int sum)
{
    vector<int> pair;
    int size = num.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if ((num[i] + num[j]) == sum)
            {
                pair.push_back(i);
                pair.push_back(j);
            }
        }
    }
    return pair;
}
int main()
{
    vector<int> nums = {2, 7, 11, 15};
    vector<int> ans = pariSum(nums, 9);

    cout << nums[ans[0]] << " " << nums[ans[1]] << endl;
    return 0;
}