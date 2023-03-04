#include <iostream>
#include <vector>
using namespace std;
vector<int> usingTwoPointer(vector<int> &nums, int k, int x)
{
    int l = 0;
    int h = nums.size() - 1;
    while (h - l >= k)
    {
        if (x - nums[l] > nums[h] - x)
        {
            l++;
        }
        else
        {
            h--;
        }
    }
    // Creating a temporary vector
    // vector<int> ans;
    // for (int i = l; i <= h; i++)
    // {
    //     ans.push_back(nums[i]);
    // }
    // return ans;
    return vector<int>(nums.begin() + l, nums.begin() + h + 1);
}
int lowerBound(vector<int> &nums, int x)
{
    int start = 0;
    int end = nums.size() - 1;
    int ans = end;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (nums[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (x > nums[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

vector<int> usingbinarySearch(vector<int> &nums, int k, int x)
{
    // lower bound
    int h = lowerBound(nums, x);
    int l = h - 1;
    while (k--)
    {
        if (l < 0)
        {
            h++;
        }
        else if (h >= nums.size())
        {
            l--;
        }
        else if (x - nums[l] > nums[h] - x)
        {
            h++;
        }
        else
        {
            l--;
        }
    }
    return vector<int>(nums.begin() + l + 1, nums.begin() + h);
}

int main()
{

    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 4, x = 3;

    cout << "Using two Pointers " << endl;
    vector<int> anss = usingTwoPointer(nums, k, x);
    for (int i = 0; i < anss.size(); i++)
    {
        cout << anss[i] << "   ";
    }
    cout << endl;

    cout << "Using Binary Search " << endl;
    vector<int> anss2 = usingTwoPointer(nums, k, x);
    for (int i = 0; i < anss2.size(); i++)
    {
        cout << anss2[i] << "   ";
    }
    cout << endl;
    return 0;
}
/**/