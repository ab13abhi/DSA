/*the point where order breaks
here the point where monotonic function breaks

3   4   5   6   7   1   2

if(a[mid] > a[mid + 1] && (mid + 1 < a.size())){
    return mid;
}
if(a[mid] < a[mid - 1]){
    return mid - 1;
}

*/

#include <iostream>
#include <vector>
using namespace std;
int findPivot(vector<int> nums)
{
    int s = 0;
    int e = nums.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
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
int main()
{
    vector<int> nums = {3, 4, 5, 6, 7, 1, 2};
    int ans = findPivot(nums);
    cout << "Pivot is " << nums[ans] << endl;
    return 0;
}