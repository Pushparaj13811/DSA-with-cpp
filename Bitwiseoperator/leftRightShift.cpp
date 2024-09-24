// for left shift a * 2^b
// for right shift a / 2^b


#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a = 10, b = 2;

    cout << "Bitwise left shift : " << (a << b) << endl;
    cout << "Bitwise right shift : " << (a >> b) << endl;
}