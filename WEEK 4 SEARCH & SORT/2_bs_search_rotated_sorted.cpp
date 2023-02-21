#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int target, int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] < target)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return 0;
}
int findPivot(vector<int> nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if ((nums[mid] > nums[mid + 1]) && (mid + 1 < nums.size()))
        {
            return mid;
        }
        if (nums[mid] < nums[mid - 1])
        {
            return mid - 1;
        }
        if (nums[s] >= nums[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int search(vector<int> nums, int target)
{
    int pivot = findPivot(nums);

    // left side
    if ((target >= nums[0]) && (target <= nums[pivot]))
    {
        int ans = binarySearch(nums, target, 0, pivot);
        cout << ans;
    }
    // right side
    if ((pivot + 1 < nums.size()) && (target >= nums[pivot + 1]) && (target <= nums[nums.size() - 1]))
    {
        int ans = binarySearch(nums, target, pivot + 1, nums.size() - 1);
        cout << ans;
    }
    return -1;
}
int main()
{
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 7;
    search(nums, target);
    return 0;
}