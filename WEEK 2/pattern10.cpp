// FANCY PATTERN #2
#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    // rows
    for (int i = 1; i <= n; i++)
    {
        // 1st triangle
        for (int j = 0; j < i; j++)
        {
            if(j>0){
                cout << "*"<<i;
            }
            else{
                cout << i;
            }
            
        }
        cout << endl;
    }
    for (int i = n; i > 0; i--)
    {
        // 1st triangle
        for (int j = 0; j < i; j++)
        {
            if(j>0){
                cout << "*"<<i;
            }
            else{
                cout << i;
            }
        }
        cout << endl;
    }
}