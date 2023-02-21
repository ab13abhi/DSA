// INVERTED FULL PYRAMID
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int m = 3;
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        // to print spaces
        for (int j = m; j < 3; j++)
        {
            cout << "  ";
        }
        // to print stars
        for (int k = temp; k > 0; k--)
        {
            cout << "   *";
        }
        
        
        cout << endl;
        m--;
        temp--;
    }
}