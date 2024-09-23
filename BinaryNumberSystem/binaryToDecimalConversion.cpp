#include <iostream>

using namespace std;

int binaryToDecimal(int n)
{
    int decimalNumber = 0;
    int base = 1;

    while (n)
    {
        int lastDigit = n % 10;
        n = n / 10;

        decimalNumber += lastDigit * base;

        base = base * 2;
    }

    return decimalNumber;
}

int main()
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;

    cout << "Decimal number: " << binaryToDecimal(n) << endl;

    return 0;
}