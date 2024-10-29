#include <iostream>
#include <vector>

using namespace std;

int singleElement(vector<int> arr){
    int st = 0, n = arr.size(), end = n - 1;

    if(n == 1){
        return arr[0];
    }

    while(st <= end){
        int mid = st + (end - st )/ 2;

        if(mid == 0 && arr[0] != arr[1]){
            return arr[0];
        }
        if(mid == n - 1 && arr[n-1] != arr[n-2]){
            return arr[n-1];
        }

        if(arr[mid - 1] != arr[mid] && arr[mid] != arr[mid+1]){
            return arr[mid];
        }

        if(mid % 2 == 0){
            if(arr[mid] == arr[mid - 1]){
                end = mid - 1;
            }else{
                st = mid + 1;
            }
        }else{
            if(arr[mid] == arr[mid - 1]){
                st = mid - 1; 
            }else{
                end = mid + 1;
            }
        }
    }
    return -1;
}
int main (){
    vector<int> nums = {1,1,2,2,3,4,4,6,6};
    vector<int> nums2 = {1,1,2,2,3,3,4,5,5,6,6,};
    cout<< singleElement(nums) << endl;
    cout<< singleElement(nums2) << endl;
    return 0;
}