/*DOUBLING-GALLOPING-STRAVIK SEARCH*/
#include <iostream>
using namespace std;

int bS(int a[], int s, int e, int x)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int eS(int a[], int n, int x)
{
    if (a[0] == x)
        return 0;
    int i = 1;

    while (i < n && a[i] <= x)
    {
        i = i * 2;
    }
    return bS(a, i / 2, min(i, n - 1), x);
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(int);
    int ans = eS(arr, n, 10);
    cout << ans;
    return 0;
}