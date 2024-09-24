#include <iostream>

using namespace std;

int main()
{
    int nums[] = {5, 10, 23, 76, -14, 30};
    int size = sizeof(nums) / sizeof(int);

    int largest = INT_MIN;
    int index = -1;

    for(int i = 0; i < size; i++){
        if(nums[i] > largest){
            largest = nums[i];
            index = i;
        }
    }

    cout << "Largest number is : " << largest << endl;
    cout << "Index of largest number is : " << index << endl;
    
    return 0;
}