#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != 0)
        {
            for (int j = 0; j < 2 * i - 1; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i < n ; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }
        cout << "*";
        if (i != n -1)
        {
            for (int j = 0; j < 2 * (n - i) - 3; j++)
            {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}