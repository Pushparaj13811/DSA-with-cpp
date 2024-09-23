#include <iostream>
using namespace std;

int main()
{
    char a;
    int  b;
    cout << "Enter the char you want to print in pyramid: ";
    cin >> a;

    cout << "Enter the number of rows: ";
    cin >> b;

    for (int i = 1; i < b; i++)
    {
        for (int j = 1; j < b - i; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < 2 * (i - 1); k++)
        {
            cout << a;
        }
         cout << endl;
    }
}
