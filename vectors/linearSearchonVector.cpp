#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int key)
{
    int index = 0;
    for (int val : vec)
    {
        if (val == key)
        {
            return index;
        }
        index++;
    }
    return -1;
}
int main()
{
    vector<int> vec = {1, 2, 4, 5, 6, 7, 8, 9};
    int key = 90;
    int res = linearSearch(vec, key);

    if (res != -1)
    {
        cout << "The value " << key << " is present at index " << res << " in the given vector." << endl;
    }
    else
    {

        cout << "The value " << key << " is not present in the given vector." << endl;
    }
    return 0;
}