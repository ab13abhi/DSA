#include <iostream>
#include <vector>
using namespace std;

int peek(vector<int> &v)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    
    while (s < e)
    {
        if (v[mid] < v[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return v[s];
}
int main()
{
    vector<int> v{0, 10, 5, 2};
    int ans = peek(v);
    cout << ans;
    return 0;
}