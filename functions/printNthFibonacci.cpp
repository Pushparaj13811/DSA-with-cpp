#include <iostream>

using namespace std;

int printFibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return printFibonacci(n - 1) + printFibonacci(n - 2);
}

int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << ": ";
    for (int i = 0; i < n; i++)
    {
        cout << printFibonacci(i) << " ";
    }
    cout << endl;

    return 0;
}