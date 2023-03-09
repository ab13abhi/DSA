#include <iostream>
#include <string>
using namespace std;

string reverseOnlyLetters(string s)
{

    int left = 0;
    int right = s.size() - 1;

    while (left < right)
    {

        if (isalpha(s[left]) && isalpha(s[right]))
        {
            swap(s[left], s[right]);
            left++;
            right--;
        }
        else if (!isalpha(s[left]))
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return s;
}
int main()
{
    string s = "Test1ng-Leet=code-Q!";


    cout << reverseOnlyLetters(s);

    return 0;
}