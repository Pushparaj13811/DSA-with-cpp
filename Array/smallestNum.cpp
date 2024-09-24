#include <iostream>

using namespace std;

int main()
{
    int nums[] = {5, 10, 23, 7, -14, 30};
    int size = sizeof(nums) / sizeof(int);

    int smallest = INT_MAX;

    for (int i = 1; i <= size; i++)
    {
        // if (nums[i] < smallest)
        // {
        //     smallest = nums[i];
        // }

        smallest = min(nums[i], smallest);
    }
    cout << "Smallest number is : " << smallest << endl;

    return 0;
}