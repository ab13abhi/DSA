#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> a = {1, 5, 3, 4, 3, 5, 6};

    // bruteforce says use 2 loops

    // hashing
    unordered_map<int, int> hash;
    for (int i = 0; i < a.size(); i++)
    {
        hash[a[i]]++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        if (hash[i] > 1)
        {
            cout << i + 1;
            break;
        }
        
    }

    return 0;
}