// FULL_PYRAMID
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int m = n / 2;
    for (int i = 0; i < n; i++)
    {
        // to print spaces
        for (int j = 0; j <= m + 1; j++)
        {
            cout << "  ";
        }
        // to print stars
        for (int k = 0; k <= i; k++)
        {
            cout << "   *";
        }
        cout << endl;
        m--;
    }
}