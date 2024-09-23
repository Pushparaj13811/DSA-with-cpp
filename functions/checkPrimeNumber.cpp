#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n = 5;
    string Prime;

    if (isPrime(n)) {
        Prime = "yes";
    } else {
        Prime = "no";
    }

    cout << "Is " << n << " prime? " << Prime << endl;

    return 0;
}
