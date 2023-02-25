/*Bubble Sort

-> given a,b
-> if a>b then swap
-> in every round we put the 1st largest element at right place

*/
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3, 6, 1, 5, 7, 2};
    int n = 6;
    for (int round = 1; round < n; round++)
    {
        for (int j = 0; j < n - round; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int round = 0; round < n; round++)
    {
        cout << arr[round] << " ";
    }
    cout << endl;
    return 0;
}
