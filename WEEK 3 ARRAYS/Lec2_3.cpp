// union and intersection of 2 arrays
#include <iostream>
#include <vector>
using namespace std;
int union_new(vector<int> arr1, vector<int> arr2, vector<int> arr3)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        arr3.push_back(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        arr3.push_back(arr2[i]);
    }
    for (auto element: arr3)
    {
        cout << element << " ";
    }
    return 0;
}
int intersection_new(vector<int> arr1, vector<int> arr2, vector<int> arr4)
{
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr1[i] == arr2[j])
            {
                arr4.push_back(arr1[i]);
            }
        }
    }
    for (int i = 0; i < arr4.size(); i++)
    {
        cout << arr4[i] << " ";
    }
    return 0;
}
int main()
{
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {4, 5, 2};

    vector<int> arr3;
    union_new(arr1, arr2, arr3);
    cout << endl;
    vector<int> arr4;
    intersection_new(arr1, arr2, arr4);

    return 0;
}