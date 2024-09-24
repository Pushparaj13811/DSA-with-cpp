#include <iostream>

using namespace std;
int sumOfAllNumbers(int arr[], int size){
    int sum = 0 ;
    for(int i = 0; i < size ; i++){
        sum += arr[i]; 
    }
    return sum;
}

int prodOfAllNumbers(int arr[], int size){
    int prod = 1;
    for(int i = 0; i < size; i++){
        prod *= arr[i];
    }
    return prod;
}
int main(){
    int nums[] = {10,2, 3, 6,45};
    int size = sizeof(nums) / sizeof(int);

    cout << "Sum of all number of given array is : " << sumOfAllNumbers(nums,size) << endl;
    cout << "Product of all number of given array is : " << prodOfAllNumbers(nums,size) << endl;

    return 0;
}