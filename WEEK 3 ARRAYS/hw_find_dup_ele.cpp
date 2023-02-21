// Input: nums = [1,3,4,2,2]
// Output: 2
// You must solve the problem without modifying the array nums and uses only constant extra space.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 3, 4, 2, 2};

    /*Sort and compare next position*/
    // sort(nums.begin(), nums.end());

    /*Visited Method*/
    // int ans = -1;

    // for (int i = 0; i < nums.size(); i++)
    // {
    //     int index = abs(nums[i]);

    //     // already visited
    //     if (nums[index] < 0)
    //     {
    //         ans = index;
    //         break;
    //     }
    //     // visited mark
    //     nums[index] = -1;
    // }
    // cout << ans;

    /*Positioning Method*/
    while (nums[0] != nums[nums[0]])
    {
        swap(nums[0], nums[nums[0]]);
    }
    cout << nums[0];
    return 0;
}