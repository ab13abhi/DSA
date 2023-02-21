// Sort 0's and 1's without sort()
#include <iostream>
#include <vector>
using namespace std;
int bruteforce(vector<int> arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] > arr[j]))
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int two_ptr(vector<int> arr)
{
    int ptr_1 = 0;
    int ptr_2 = arr.size() - 1;
    while (ptr_1 <= ptr_2)
    {
        if (arr[ptr_1] > arr[ptr_2])
        {
            swap(arr[ptr_1], arr[ptr_2]);
            ptr_1++;
            ptr_2--;
        }
        else if (arr[ptr_1] == arr[ptr_2])
        {
            ptr_1++;
        }
        else
        {
            ptr_2--;
        }
    } 
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
int main()
{
    vector<int> arr = {0, 1, 1, 0, 1, 0, 1, 0, 0};
    bruteforce(arr);
    two_ptr(arr);
    return 0;
}