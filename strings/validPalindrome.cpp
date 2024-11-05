// 125. Valid Palindrome

// A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

// Given a string s, return true if it is a palindrome, or false otherwise.



#include <iostream>
#include <string>

using namespace std;

bool isValidPalindrome(string s){
    int st = 0, end = s.length();
    while(st < end){
        if(!isalnum(s[st])){
            st++;
            continue;
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[st]) != tolower(s[end])){
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main (){
    string s = "A man, a plan, a canal: Panama";
    cout << isValidPalindrome(s) << endl;
    return 0;
}