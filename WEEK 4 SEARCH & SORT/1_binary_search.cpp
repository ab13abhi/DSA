#include <iostream>
using namespace std;

int binarySearch(int *arr, int size, int target)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == target)
        {
            return 1;
        }
        else if (arr[mid] < target)
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
int main()
{
    int nums[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int target = 20;
    cout << binarySearch(nums, 8, target);

    return 0;
}