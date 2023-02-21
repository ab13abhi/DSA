#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int left_ptr = 0;
    int right_ptr = 9;

    while (left_ptr < right_ptr)
    {
        cout << arr[left_ptr] << " ";
        cout << arr[right_ptr] << " ";
        left_ptr++;
        right_ptr--;
    }
    return 0;
}