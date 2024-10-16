#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> arr, int key)
{
    int st = 0;
    int end = arr.size();

    while (st <= end)
    {
        // int mid = (st + end) / 2;

        int mid = st + (end - st) / 2;
        
        if(arr[mid] < key){
            st = mid + 1;
        }else if(arr[mid] > key){
            end = mid - 1;
        }else if(arr[mid] == key){
            return mid;
        }
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,2,4,5,6,9};
    int key = 4;
    cout << binarySearch(nums, key) << endl;

    return 0;
}