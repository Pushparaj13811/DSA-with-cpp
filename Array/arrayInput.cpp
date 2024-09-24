#include <iostream>

using namespace std;

int main(){
    int size = 5;
    int marks[size];

    for (int i = 1; i <= size; i++){
        cout << "Enter the value of marks[" + to_string(i) + "] : ";
        cin >> marks[i];
    }

    for(int i = 1; i <= size ; i++){
        cout << marks[i] << " ";
    }
    cout << endl;
}