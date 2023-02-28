// K-Diff Pairs in an Array
// Using two pointer and binary search
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int findPairsTwoPointer(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    // creating set to have distinct pairs
    set<pair<int, int>> ans;
    int count = 0;
    int i = 0;
    int j = 1;
    while (j < nums.size())
    {
        int diff = nums[j] - nums[i];
        if (diff == k)
        {
            ans.insert({nums[i], nums[j]});
            i++;
            j++;
        }
        else if (diff > k)
        {
            i++;
        }
        else
        {
            j++;
        }
        if (i == j)
            j++;
    }
    return ans.size();
}

int binarySearch(vector<int> &nums, int start, int k)
{
    int end = nums.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == k)
        {
            return mid;
        }
        else if (nums[mid] < k)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int findPairsBinarySearch(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    // creating set to have distinct pairs
    set<pair<int, int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (binarySearch(nums, i + 1, (nums[i] + k)) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }
    return ans.size();
}
int main()
{
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;

    cout << "Using Two Pointer: " << findPairsTwoPointer(nums, k) << endl;

    cout << "Using Binary Search: " << findPairsBinarySearch(nums, k) << endl;
    return 0;
}

/*
make sure to have an absolute value
also you have to find distinct pairs
*/
