#include <iostream> 

using namespace std; 

int main(){
    int n = 4; 

    for(int i = 1; i <= n ; i++){
        for(int j = i; j > 0; j-- ){
            cout << j << " ";
        }
        cout << endl;
    }
}