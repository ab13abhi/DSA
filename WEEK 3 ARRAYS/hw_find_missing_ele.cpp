#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 3, 4, 5, 6};
    for (int i = 0; i < 5 - 1; i++)
    {
        if (a[i] + 1 != a[i + 1])
        {
            cout << a[i] + 1;
            cout << endl;
        }
    }
    return 0;
}