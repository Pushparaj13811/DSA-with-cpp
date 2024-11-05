// 2914. Minimum Number of Changes to Make Binary String Beautiful

// You are given a 0-indexed binary string s having an even length.

// A string is beautiful if it's possible to partition it into one or more substrings such that:

// Each substring has an even length.
// Each substring contains only 1's or only 0's.
// You can change any character in s to 0 or 1.

// Return the minimum number of changes required to make the string s beautiful.

#include <iostream>
#include <string> 

using namespace std;

int minChanges(string s){
    int n = s.length(), changes = 0; 
    for(int i = 0; i < n; i+=2){
        if(s[i] == s[i+1]){
            continue;
        }else{
            changes++;
        }
    }
    return changes;
}

int main(){
    string s = "1001";
    cout << minChanges(s) << endl;
    s = "10";
    cout << minChanges(s) << endl;
    s = "0000";
    cout << minChanges(s) << endl;
    return 0;
}
