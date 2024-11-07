// 1910. Remove All Occurrences of a Substring

// Given two strings s and part, perform the following operation on s until all occurrences of the substring part are removed:

// Find the leftmost occurrence of the substring part and remove it from s.
// Return s after removing all occurrences of part.

// A substring is a contiguous sequence of characters in a string.

#include <iostream>
#include <string> 

using namespace std;

string removeOccurance(string s, string part){
    while(s.find(part) < s.length()){
        int st = s.find(part);
        int end = part.length();
        if(st < s.length()){
            s.erase(st,end);
        }
    }
    return s;
}

int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << removeOccurance(s,part) << endl;
    s = "axxxxyyyyb"; 
    part = "xy";
    cout << removeOccurance(s,part) << endl;
    return 0;
}