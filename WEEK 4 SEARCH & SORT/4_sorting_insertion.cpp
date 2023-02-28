/*Insertion Sort
-> pick each element and put them in their correct space




*/
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 6, 1, 5, 7, 2};
    int n = 6;

    for (int round = 1; round < n; round++)
    {
        int val = arr[round];
        int j = round - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > val)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = val;
    }

    for (int round = 0; round < n; round++)
    {
        cout << arr[round] << " ";
    }
    cout << endl;
    return 0;
}
