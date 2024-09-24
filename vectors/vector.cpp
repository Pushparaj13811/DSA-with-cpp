#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vect; 
    vector<int> vec = {1,2,4};
    vector<int> vector(5,0);
    cout << vec[0] << endl;
    cout << vector[0] << endl;
    cout << vector[1] << endl;
    cout << vector[2] << endl;
    return 0;
}