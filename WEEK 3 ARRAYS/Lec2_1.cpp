/*
#include<vector>
vector is a dynamic array
vector<int> arr;
it doubles it's size
vector<int>arr(10,20,30); initilizing with 3 elements
vector<int>arr(10,-1); initilizing 10 elements all with value -1
to insert into vector: arr.push_back(5);
to delete from vector: arr.pop_back();
to know size of vector: arr.size();
to know how many elements that can be stored: arr.capacity();
to know vector is empty: arr.empty();

*/
#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> arr;
    int ans = {sizeof(arr) / sizeof(int)};
    cout << ans << endl;
    
}