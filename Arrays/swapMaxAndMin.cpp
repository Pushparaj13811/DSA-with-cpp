#include <iostream>

using namespace std;

void swapMaxAndMinNumbers(int arr[], int size)
{
    int min = INT_MAX;
    int max = INT_MIN;
    int indexOfMax, indexOfMin;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            indexOfMax = i;
        }
        if (arr[i] < min)
        {
            min = arr[i];
            indexOfMin = i;
        }
    }
    swap(arr[indexOfMin], arr[indexOfMax]);
}

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int nums[] = {1, 2, 3, 4, -6, 10, 23, 22, 34};
    int size = sizeof(nums) / sizeof(int);

    cout << "Array Before swapping min and max value : ";
    printArr(nums, size);

    swapMaxAndMinNumbers(nums, size);
    cout << "Array after swapping min and max value : ";
    printArr(nums, size);
    return 0;
}