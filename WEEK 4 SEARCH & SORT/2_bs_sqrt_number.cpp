#include <iostream>
using namespace std;
int sqrt(int x)
{
    int s = 0;
    int e = x;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        int sq = mid * mid;
        
        if (x == sq)
            return mid;
        
        if (sq < x)
        {
            ans = -1;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter the number" << endl;
    cin >> x;

    cout << sqrt(x);
    
    return 0;
}