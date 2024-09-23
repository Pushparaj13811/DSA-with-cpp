// Calculate nCr bionomial coefficient for n & r;
// nCr = (n!)/ (r! * (n-r)!)

#include <iostream>

using namespace std;

int fact(int n){
    int fact = 1;

    for(int i = 1; i <= n; i++){
        fact *= i;
    }

    return fact;
}

int ncr(int n, int r){
    int factn = fact(n);
    int factr = fact(r);
    int factnmr = fact(n-r);

    int ncr = factn / (factr * factnmr);

    return ncr;
}

int main(){
    int n = 6, r = 3;

    cout << ncr(n,r) << endl;
    return 0;
}
