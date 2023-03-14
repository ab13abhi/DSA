#include <iostream>
using namespace std;

void subsequences(string s, string output, int i)
{

    // base case
    if (i >= s.length())
    {
        cout << output << endl;
        return;
    }
    // exclude
    subsequences(s, output, i + 1);
    // include
    output.push_back(s[i]);
    subsequences(s, output, i + 1);
}
int main()
{
    string s = "abc";
    string output = "";
    int i = 0;
    subsequences(s, output, i);
    return 0;
}