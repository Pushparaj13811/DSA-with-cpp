// Given an array arr and integer k, where arr[i] denotes the number of pages of a book. k students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the sum of the maximum number of pages in a book allotted to a student should be the minimum, out of all possible permutations.

// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous order (see the explanation for better understanding).

// Examples:

// Input: arr = [12, 34, 67, 90], k = 2
// Output: 113
// Explanation: Allocation can be done in following ways:
// {12} and {34, 67, 90} Maximum Pages = 191
// {12, 34} and {67, 90} Maximum Pages = 157
// {12, 34, 67} and {90} Maximum Pages =113.
// Therefore, the minimum of these cases is 113, which is selected as the output.
// Input: arr = [15, 17, 20], k = 5
// Output: -1
// Explanation: Allocation can not be done.
// Input: arr = [22, 23, 67], k = 1
// Output: 112
// Constraints:
// 1 <=  arr.size() <= 106
// 1 <= arr[i] <= 103
// 1 <= k <= 103

#include <iostream>
#include <vector>

using namespace std;

bool isValid(vector<int> arr, int k, int maxAllowedPages)
{
    int student = 1, pages = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxAllowedPages)
        {
            return false;
        }

        if (arr[i] + pages > maxAllowedPages)
        {
            student++;
            pages = arr[i];
        }
        else
        {
            pages += arr[i];
        }
    }

    return student > k ? false : true;
}
int findPages(vector<int> &arr, int k)
{

    if (arr.size() < k)
    {
        return -1;
    }

    int st = 0, end = 0, ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        end += arr[i];
    }

    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (isValid(arr, k, mid))
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
    vector<int> nums = {15, 17, 20};
    int k = 5;
    int l = 2;

    cout << findPages(nums, k) << endl;
    cout << findPages(nums, l) << endl;

    return 0;
}