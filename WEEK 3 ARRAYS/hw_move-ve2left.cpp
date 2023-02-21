#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {2, 5, -1, -7, 3, 6, 8, -11};
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    // for(int i = 0; i < nums.size(); i++){
    //     if(nums[i] < 0){
    //         swap(nums[i],nums[low]);
    //         low++;
    //     }
    // }

    while (mid <= high)
    {
        if (nums[mid] > nums[high] && nums[high] < 0)
        {
            swap(nums[mid], nums[high]);
            high--;
            mid++;
        }
        else if (nums[mid] > 0 && nums[high] > 0)
        {
            high--;
        }
        else
        {
            mid++;
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}