#include <iostream>

using namespace std;

void printIntersectionOfTwoArray(int arr1[], int size1, int arr2[], int size2)
{
    int intersection[100];
    int index = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                bool isAlreadyPresent = false;
                for (int k = 0; k < index; k++)
                {
                    if (intersection[k] == arr1[i])
                    {
                        isAlreadyPresent = true;
                        break;
                    }
                }
                if (!isAlreadyPresent)
                {
                    intersection[index] = arr1[i];
                    index++;
                }
            }
        }
    }

    cout << "Intersection of two arrays: ";
    for (int i = 0; i < index; i++)
    {
        cout << intersection[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printIntersectionOfTwoArray(arr1, size1, arr2, size2);
    
    return 0;
}