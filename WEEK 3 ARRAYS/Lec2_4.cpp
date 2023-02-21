// PAIR SUM
#include <iostream>
#include <vector>
using namespace std;
int bruteforce(vector<int> arr, int key)
{
    int count = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] + arr[j]) == key)
            {
                cout << arr[i] << " " << arr[j] << endl;
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}

int main()
{
    vector<int> arr = {1, 3, 5, 7, 2, 4, 6};
    int key = 9;
    bruteforce(arr, key);
    return 0;
}