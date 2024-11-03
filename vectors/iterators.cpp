#include <iostream>
#include <vector>

using namespace std; 

int main(){
    vector<int> vec = {1, 2, 3, 4, 5};

    cout << *vec.begin() << endl;
    cout << *(vec.begin() + 1) << endl;
    return 0;
}