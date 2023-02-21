// NUMERIC HOLLOW PYRAMID
#include <iostream>
using namespace std;

int main()
{
    int n = 6;
    int m = n / 2;
    int temp = 1;
    for (int i = 0; i < n; i++)
    {
        // to print spaces
        for (int j = 0; j <= m + 1; j++)
        {
            cout << "  ";
        }
        // to print stars
        for (int k = 1; k <= i; k++)
        {
            if ((k > 1 && k < n - 1) && (i > 0 && i < n - 1))
            {
                for (int sp = 1; sp <= i; sp++)
                {
                    if (k == i)
                    {
                        cout << "   a" << temp;
                        break;
                    }
                    else
                    {
                        cout << " ";
                        // break;
                    }
                }
            }
            else
            {
                cout << "   " << temp;
                // temp++;
            }
            temp++;
        }
        temp = 1;
        cout << endl;
        m--;
    }
}