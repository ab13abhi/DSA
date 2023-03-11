#include <iostream>
using namespace std;

string reorganizeString(string s)
{

    // make hash
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    // count most occurant character
    char high_freq_char;
    int max_freq = INT_MIN;
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > max_freq)
        {
            max_freq = hash[i];
            high_freq_char = i + 'a';
        }
    }
    // place most occurant in 1 go
    int index = 0;
    while (max_freq > 0 && index < s.size())
    {
        s[index] = high_freq_char;
        max_freq--;
        index += 2;
    }
    if (max_freq != 0)
    {
        return "";
    }
    hash[high_freq_char - 'a'] = 0;

    // place other character after 1 gap
    for (int i = 0; i < 26; i++)
    {
        while (hash[i] > 0)
        {
            index = index >= s.size() ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
        }
    }
    return s;

    // THIS QUESTION IS SOLVED USING GREEDY ALGO
    // THIS QUESTION CAN ALSO BE SOLVED USING PRIORITY QUEUE
}

int main()
{
    string s = "aab";
    cout << reorganizeString(s);
    return 0;
}