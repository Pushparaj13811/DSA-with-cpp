#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    cout << "vector size : " << vec.size() << endl;
    cout << "vector capacity : " << vec.capacity() << endl;
    return 0;
}