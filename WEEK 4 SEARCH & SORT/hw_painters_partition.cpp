// MOST IMPORTANT
#include <iostream>
#include <numeric>
#include <functional>
using namespace std;

bool isPossibleSolution(int a[], int n, int m, long long mid)
{
    long long timeSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
        {
            return false;
        }
        if (timeSum + a[i] > mid)
        {
            c++;
            timeSum = a[i];
            if (c > m)
            {
                return false;
            }
        }
        else
        {
            timeSum += a[i];
        }
    }
    return true;
}
long long minTime(int arr[], int n, int k)
{
    long long start = 0;
    long long ans = -1;
    long long end = accumulate(arr, arr + n, 0); // used to find sum of array

    while (start <= end)
    {
        long long mid = start + (end - start) / 2;
        if (isPossibleSolution(arr, n, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int a[] = {5, 10, 30, 20, 15};
    int n = 5; // no. of books
    int m = 3; // no. of people
    cout << "Minimum time " << minTime(a, n, m) << endl;
    return 0;
}