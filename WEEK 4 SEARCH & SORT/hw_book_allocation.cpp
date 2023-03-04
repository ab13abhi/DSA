// MOST IMPORTANT
#include <iostream>
#include <numeric>
#include <functional>
using namespace std;

bool isPossibleSolution(int a[], int n, int m, int mid)
{
    int pageSum = 0;
    int c = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mid)
        {
            return false;
        }
        if (pageSum + a[i] > mid)
        {
            c++;
            pageSum = a[i];
            if (c > m)
            {
                return false;
            }
        }
        else
        {
            pageSum += a[i];
        }
    }
    return true;
}

int book(int a[], int n, int m)
{
    // if (m - n)
    //     return -1;
    int start = 0;
    int ans = -1;
    int end = accumulate(a, a + n, 0); // used to find sum of array

    while (start <= end)
    {
        int mid = (start + end) >> 1;
        if (isPossibleSolution(a, n, m, mid))
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
    int a[] = {12, 34, 67, 90};
    int n = 4; // no. of books
    int m = 2; // no. of people
    cout << "Minimum pages " << book(a, n, m) << endl;
    return 0;
}