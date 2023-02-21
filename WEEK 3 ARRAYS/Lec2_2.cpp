// find unique element
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> elements = {1, 2, 1, 2, 5};
    int n = 5;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = elements[i];
    }
    cout << ans;
    return 0;
}