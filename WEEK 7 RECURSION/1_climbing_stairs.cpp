#include <iostream>
using namespace std;

int climbStairs(int n)
{
    /*

    TIME LIMIT EXCEEDED:

    if(n == 0 || n == 1){
        return 1;
    }
    return climbStairs(n-1) + climbStairs(n-2);

    */
    return 0;
}

int countdigits(int &n)
{
    // base case
    if (n == 0)
    {
        return 1;
    }

    // solving 1 case
    
    int newVal = n / 10;
    countdigits(newVal);
    int digit = n % 10;
    cout << digit << " ";
}
int main()
{

    int n = 5462;
    // cin >> n;
    // cout << climbStairs(n);

    countdigits(n);
    return 0;
}