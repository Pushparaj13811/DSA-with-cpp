#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string s)
{
    string str = s;
    reverse(str.begin(), str.end());
    return str == s;
}

int main()
{
    string s = "madam";
    cout << (isPalindrome(s) ? "Is palindrome" : "Not palindrome") << endl;
    return 0;
}