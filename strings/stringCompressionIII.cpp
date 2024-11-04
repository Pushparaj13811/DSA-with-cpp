// Question no :- 3163 leetcode
#include <iostream>
#include <string>

using namespace std;

string compressedString(string s)
{
    string comp = "";
    char c = s[0];
    int count = 1;
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] == c)
        {
            count++;
            if (count == 9)
            {
                comp.push_back(count + '0');
                comp.push_back(c);
                c = s[i];
                count = 0;
            }
        }
        else
        {
            if (count != 0)
            {
                comp.push_back(count + '0');
                comp.push_back(c);
            }
            c = s[i];
            count = 1;
        }
    }
    return comp;
}
int main()
{
    string s = "aaabcccd";
    cout << compressedString(s) << endl;
    return 0;
}