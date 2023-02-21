// NUMERIC HOLLOW PYRAMID
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        // printing spaces
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // printing numeric digits 
        for (int k = 0; k < i; k++)
        {
            if ((i > 0 && i < n - 1) && (k > 0 && k < i - 1))
            {
                cout << "  ";
            }
            else
            {
                cout << " " << k + 1;
            }
        }
        cout << endl;
    }
}