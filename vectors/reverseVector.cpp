#include <iostream>
#include <vector>

using namespace std;

void reverseVector(vector<int> &vec)
{
    int size = vec.size();
    int start = 0;
    int end = size - 1;
    for (int i = 0; i <= size; i++)
    {
        if (start < end)
        {
            swap(vec[start], vec[end]);
            start++;
            end--;
        }
    }
}

void printVector(vector<int> vec)
{
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec = {1, 2, 4, 5, 6, 7, 8, 9};
    cout << "Vector before reversing : ";
    printVector(vec);

    reverseVector(vec);
    cout << "Vector after reversing : ";
    printVector(vec);
    
    return 0;
}