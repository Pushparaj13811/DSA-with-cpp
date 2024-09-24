#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> vec)
{
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec;
    cout << "Size of vector : " << vec.size() << endl;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(10);
    cout << "Size of vector after push back: " << vec.size() << endl;
    cout << "Elements of vector : ";
    printVec(vec);
    vec.pop_back();
    cout << "Size of vector after pop back: " << vec.size() << endl;
    cout << "Elements of vector : ";
    printVec(vec);

    cout << "Front value : " << vec.front() << endl;
    cout << "Back value : " << vec.back() << endl;
    cout << "Value at index 1 : " << vec.at(1) << endl;
}