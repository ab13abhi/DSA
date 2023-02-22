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

    // int precision;
    // cout << "Enter the number of floating digits in precison "<<endl;
    // cin >> precision;

    // double step = 0.1;
    // double finalAns = ans;
    // for(int i=0; i<precision; i++) {

    //   for(double j=finalAns; j*j<=n; j = j + step) {
    //       finalAns = j;
    //   }
    //   step = step / 10;
    // }
    // cout << "Final ans is. "<< finalAns << endl;
    return 0;
}