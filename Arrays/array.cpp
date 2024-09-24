#include <iostream>

using namespace std;

int main(){
    int marks[5] = {97,86,66,76,45};

    // size of array can be calculated by : sizeof(marks) / sizeof(int)

    cout << sizeof(marks) / sizeof(int) << endl;

    return 0;
}