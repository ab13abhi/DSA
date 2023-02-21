#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {0, 1, 0, 0, 1, 0, 1, 1, 1, 1};
    int count_1 = 0, count_0 = 0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] ^ 1 == 0) // XOR
            count_1++;
        else
            count_0++;
    }
    cout << "Number of 1's : " << count_1 << endl;
    cout << "Number of 0's : " << count_0 << endl;
}