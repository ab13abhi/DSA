#include <iostream>
using namespace std;

int bS(int divisor, int divident)
{
    int s = 0;
    int e = abs(divident);
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (abs(mid * divisor) == abs(divident))
        {
            ans = mid;
            break;
        }
        if (abs(mid * divisor) > abs(divident))
        {
            e = mid - 1;
        }
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    if ((divisor < 0 && divident < 0) || (divisor > 0 && divident > 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int divisor = 7;
    int divident = 22;

    int ans = bS(divisor, divident);
    cout << ans << endl;
    return 0;
}