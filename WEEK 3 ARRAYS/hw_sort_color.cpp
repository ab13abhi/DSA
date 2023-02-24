// Input: nums = [2,0,2,1,1,0]
// Output: [0,0,1,1,2,2]
// DUCTH NATIONAL FLAG PROBLEM
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    int lo = 0;
    int hi = nums.size() - 1;
    int mid = 0;

    while (mid <= hi)
    {
        switch (nums[mid])
        {

        // If the element is 0
        case 0:
            swap(nums[lo++], nums[mid++]);
            break;

        // If the element is 1 .
        case 1:
            mid++;
            break;

        // If the element is 2
        case 2:
            swap(nums[mid], nums[hi--]);
            break;
        }
    }
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}