#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    cout << gcd(10, 5) << endl;
    cout << gcd(10, 20) << endl;
    return 0;
}