/*

*/

#include <iostream>
#include <cstring>

using namespace std;

int getLength(char name[])
{
    int length = 0;
    int i = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

bool checkPalindrome(char name[])
{
    int i = 0;
    int j = strlen(name) - 1;
    while (i <= j)
    {
        if (name[i] == name[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
            break;
        }
    }
    return true;
}
string toUpperCase(char name[]){
    int i = 0;
    while (name[i] != '\0')
    {
        name[i] = char( name[i] -'a' + 65);
        i++;
    }
    return name;
   
}
int main()
{
    char arr[100];
    cout << "Enter the string: ";
    cin.getline(arr, 50);
    cout << arr << endl;
    cout << getLength(arr) << endl;
    cout << checkPalindrome(arr) << endl;
    cout << toUpperCase(arr) << endl;

    string str;
    getline(cin, str);










    return 0;
}