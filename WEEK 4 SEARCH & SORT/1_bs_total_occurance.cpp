#include <iostream>
#include <vector>
using namespace std;

int fO(vector<int> &v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (v[mid] == target)
        {
            // ans store
            ans = mid;
            // left search
            e = mid - 1;
            // return mid;
        }
        else if (target < v[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lO(vector<int> &v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (v[mid] == target)
        {
            // ans store
            ans = mid;
            // left search
            s = mid + 1;
            // return mid;
        }
        else if (target < v[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int main()
{
    vector<int> v{1, 3, 4, 4, 4, 4, 4, 6, 7};
    int target = 4;
    int firstOccurance = fO(v, target);
    int lastOccurance = lO(v, target);
    cout << lastOccurance - firstOccurance + 1;
    return 0;
}