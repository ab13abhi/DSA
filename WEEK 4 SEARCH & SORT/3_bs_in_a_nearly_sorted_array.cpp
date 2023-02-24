/*
10  3   40  20  50  80  70
Element can be found at (i-1), (i), (i+1)


sort() - O(n log n)
bs() - O(log n)


*/

#include <iostream>
#include <vector>
using namespace std;

int bS(vector<int> nums, int target)
{
    int s = 0;
    int e = nums.size();
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (nums[mid] == target)
            return mid;
        if (nums[mid - 1] == target && mid - 1 >=0)
            return mid - 1;
        if (nums[mid + 1] == target && mid + 1 <nums.size())
            return mid + 1;
        if (nums[mid] < target)
            s = mid + 2;
        else
            e = mid - 2;
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> nums = {10, 3, 40, 20, 50, 80, 70};
    int target = 3;
    int ans = bS(nums, target);
    cout << ans << endl;
    return 0;
}