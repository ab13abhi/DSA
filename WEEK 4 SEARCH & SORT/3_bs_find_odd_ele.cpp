// find the odd ocurring element in the array
//-> means all elements occur even number of times except one
//-> all repeating numbers occur in pairs
// 1,1,2,2,3,3,4,4,3,6,6,4,4

/*This is an INDEX BASED PROBLEM of BS, here
Left Part:
1st element at even position
2nd element at odd position
Right Part:
1st element at odd position
2nd element at even position
Ans will be at Even Position

*/
#include <iostream>
#include <vector>
using namespace std;

int bS(vector<int> nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (s == e)
        {
            // single element
            return s;
        }
        if (mid % 2 == 0)
        {
            if (nums[mid] == nums[mid + 1])
            {
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        {
            if (nums[mid] == nums[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 3, 6, 6, 4, 4};
    int ans = bS(nums);
    cout << nums[ans] << endl;
    return 0;
}