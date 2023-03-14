#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int bS(vector<int> &a, int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    if (start > end)
    {
        return -1;
    }
    if (a[mid] == key)
    {
        return mid;
    }
    if (a[mid] > key)
    {
        bS(a, start, mid - 1, key);
    }
    else
    {
        bS(a, mid + 1, end, key);
    }
}
int main()
{
    vector<int> a = {5, 15, 65, 100, 198};
    int key;
    // sort(a.begin(), a.end());
    int s = 0;
    int e = a.size();
    while (key != 0)
    {
        cout << "Enter the key value: " << endl;
        cin >> key;
        cout << bS(a, s, e, key);
        cout << endl;
    }
}