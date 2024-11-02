#include <iostream>
#include <vector>

using namespace std;
int nextPermutation(vector<int> &arr)
{
    int piv = -1;
    int n = arr.size();
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            piv = i;
            break;
        }
    }
    if (piv == -1)
    {
        reverse(arr.begin(), arr.end());
        return 0;
    }
    for (int i = n - 1; i > piv; i--)
    {
        if (arr[i] > arr[piv])
        {
            swap(arr[i], arr[piv]);
            break;
        }
    }
    reverse(arr.begin() + piv + 1, arr.end());
    // int i = piv + 1, j = n - 1;
    // while (i < j)
    // {
    //     swap(arr[i++], arr[j--]);
    // }
    return 0;
}

void printArray(vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> arr2 = {5, 4, 3, 2, 1};
    vector<int> arr3 = {1, 2, 3, 6, 5, 4};

    nextPermutation(arr);
    nextPermutation(arr2);
    nextPermutation(arr3);
    cout << "Next Permutation of arr1: ";
    printArray(arr);
    cout << "Next Permutation of arr2: ";
    printArray(arr2);
    cout << "Next Permutation of arr3: ";
    printArray(arr3);
    return 0;
}