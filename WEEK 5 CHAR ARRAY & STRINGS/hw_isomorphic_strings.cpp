#include <iostream>
#include <string>
using namespace std;

bool isIsomorphic(string s, string t)
{

    int hash[256] = {0};
    bool is_t_CharsMapped[256] = {0};

    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] == 0 && is_t_CharsMapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];
            is_t_CharsMapped[t[i]] = true;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (char(hash[s[i]] != t[i]))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string s = "egg", t = "add";

    cout << isIsomorphic(s, t);
    return 0;
}