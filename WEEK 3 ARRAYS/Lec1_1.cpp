#include <iostream>
using namespace std;

bool find(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    // memset is used if wanting to initialize
    // all elements of array with any number other than zero.

    // use must pass the size of array explicitly

    /*LINEAR SEARCH*/
    int arr[5] = {1, 5, 6, 7, 9};
    if (find(arr, 5, 6))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
