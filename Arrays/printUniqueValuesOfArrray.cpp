#include <iostream>

using namespace std;

void printUniqueValues(int arr[], int size)
{
    bool isUnique;

    for (int i = 0; i < size; i++)
    {
        isUnique = true;

        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if(isUnique){
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    int nums [] = {1,2,1,1,2,2,5,6,9,4,5,6,7,9,7,3,2};
    int size = sizeof(nums)/ sizeof(int);

    printUniqueValues(nums, size);
    return 0;
}