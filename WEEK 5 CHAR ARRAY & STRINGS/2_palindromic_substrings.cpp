// PALINDROMIC SUBSTRINGS
#include <iostream>
using namespace std;

int expandAroundIndex(string s, int i, int j)
{
    int count = 0;
    while (i >= 0 && j < s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstrings(string s)
{
    int count = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {

        // ODD
        int ans_odd = expandAroundIndex(s, i, i);
        count = count + ans_odd;

        // EVEN
        int ans_even = expandAroundIndex(s, i, i + 1);
        count = count + ans_even;
    }
    return count;
}

int main()
{
    string s = "abc";
    // string s = "aaa";
    cout << countSubstrings(s) << endl;
    return 0;
}