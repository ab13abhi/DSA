// FLIPPED SOLID DIAMOND
// HOLLOW DIAMOND
#include <iostream>
using namespace std;

// LOVE BABBAR'S CODE
int main()
{
    int n = 5;
    
    // upper rectangle
    for (int row = 0; row < n; row++)
    {
        // 1st triangle
        for (int col = 0; col < n-row; col++)
        {
            cout << "*";
        }
        // 2nd space triangle
        for (int col = 0; col < 2*row+1; col++)
        {
            cout << " ";
        }
        // 3rd triangle
        for (int col = 0; col < n-row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    // bottom rectangle
    for (int row = 0; row < n; row++)
    {
        // 1st triangle
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        // 2nd triangle
        for (int col = 0; col < 2*n-2*row-1; col++)
        {
            cout << " ";
        }
        // 3rd triangle
        for (int col = 0; col < row+1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

}