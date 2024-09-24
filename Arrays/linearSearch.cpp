#include <iostream>

using namespace std;

int linearSearch(int arr[], int key, int size){

    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    int nums[] = {5,23,87,45,80};
    int size = sizeof(nums) / sizeof(int);
    int key = 80;

    int res = linearSearch(nums, key, size);

    if(res == -1){
        cout << "The given value is not availabe in the given array."<< endl;
    }
    cout << "The given value is availabe at the index : " + to_string(res) << endl;

    return 0;
}