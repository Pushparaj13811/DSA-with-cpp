#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &arr)
{
    int n = arr.size();
    bool isSwap = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if (!isSwap)
            return;
    }
}

void selectionSort(vector<int> &arr)
{
    int n = arr.size();

    for (int i = 0; i < n - 1; i++)
    {
        int smallestIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]);
    }
}

void insertionSort(vector<int> &arr)
{
    int n = arr.size();
    for (int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;
    }
}

void printArr(vector<int> arr)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> nums = {1, 5, 2, 3, 8, 5};
    selectionSort(nums);
    vector<int> nums2 = {3, 4, 5, 6, 7, 0, 1, 2};
    insertionSort(nums2);
    vector<int> nums3 = {6, 7, 0, 1, 2, 22, 34, 9, 10};
    bubbleSort(nums3);
    printArr(nums);
    printArr(nums2);
    printArr(nums3);
    return 0;
}