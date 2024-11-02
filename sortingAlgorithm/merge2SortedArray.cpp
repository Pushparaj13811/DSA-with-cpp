#include <iostream>
#include <vector>

using namespace std;
void merge(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    int idx = m + n - 1, i = m - 1, j = n - 1;
    while (i >= 0 && j >= 0)
    {
        if (arr1[i] >= arr2[j])
        {
            arr1[idx--] = arr1[i--];
        }
        else
        {
            arr1[idx--] = arr2[j--];
        }
    }
    while (j >= 0)
    {
        arr1[idx--] = arr2[j--];
    }
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
    vector<int> arr1 = {2, 4, 6, 8, 10, 0, 0, 0, 0, 0};
    vector<int> arr2 = {1, 3, 5, 7, 9};
    merge(arr1, arr2, 5, 5);
    cout << "Merged Array: " << endl;
    printArray(arr1);
    return 0;
}