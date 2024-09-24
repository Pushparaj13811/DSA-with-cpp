// Reverse array without using 2 array.
// Using 2 * pointer approach

#include <iostream>

using namespace std;

void swapArr(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
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

    int nums[] = {1, 3, 4, 5, 6, 7};
    int size = sizeof(nums) / sizeof(int);

    cout << "Array Before swapping : " ;
    printArr(nums, size);
    swapArr(nums, size);
    cout << "Array after swapping : " ;
    printArr(nums, size);
}