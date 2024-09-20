#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << ch << " ";
            ch -= 1;
        }
        ch += i + 1;
        cout << endl;
    }
}