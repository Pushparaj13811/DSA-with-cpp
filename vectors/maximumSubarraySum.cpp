#include <iostream>
#include <vector>

using namespace std;

int subarraySum(vector<int> vec)
{
    int size = vec.size();
    int maxsum = INT_MIN;

    for (int st = 0; st < size; st++)
    {
        int currsum = 0;
        for (int end = st; end < size; end++)
        {
            currsum = vec[end];
            maxsum = max(currsum, maxsum);
        }
    }
    return maxsum;
}

int main()
{
    vector<int> vec = {3, -4, -7, 5, 7, 9, 12};

    int sum = subarraySum(vec);

    cout << "Max sub array sum : " << sum << endl;

    return 0;
}