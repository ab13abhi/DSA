#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include<array>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{

    map<string, vector<string>> mp;

    for (auto str : strs)
    {
        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}

std::array<int, 256> hash(string s)
{
    std::array<int, 256> hash = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    return hash;
}

vector<vector<string>> groupAnagramsWithOutSort(vector<string> &strs)
{

    map<std::array<int, 256>, vector<string>> mp;

    for (auto str : strs)
    {
        mp[hash(str)].push_back(str);
        /*
        The problem is that C++11 already comes with std::hash (reference link) which results in the experienced conflict. Either remove the using namespace std; and put your class into an own namespace or rename the class to something different.
        */
    }

    vector<vector<string>> ans;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        ans.push_back(it->second);
    }
    return ans;
}
int main()
{

    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    // THIS METHOD USES SORT
    groupAnagrams(strs);

    // THIS METHOD IS WITHOUT SORT
    groupAnagramsWithOutSort(strs);

    return 0;
}