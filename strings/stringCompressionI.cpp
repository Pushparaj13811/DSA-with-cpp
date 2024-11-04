// Question no :- 443 leetcode
#include <iostream>
#include <vector>
using namespace std;
int compress(vector<char> &word)
{
    int n = word.size();
    int result = 0, count = 1; // count is initialized to 1 because we need to count the last character

    for (int i = 0; i < n; i++)
    {
        if (i + 1 == n || word[i] != word[i + 1])
        {
            word[result++] = word[i];
            if (count > 1)
            {
                for (char c : to_string(count))
                {
                    word[result++] = c;
                }
            }
            count = 1;
        }
        else
        {
            count++;
        }
    }
    word.resize(result);
    return result;
}
void print(vector<char> word)
{
    for (char c : word)
    {
        cout << c << " ";
    }
    cout << endl;
}
int main()
{
    vector<char> word = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(word) << endl;
    print(word);
    return 0;
}