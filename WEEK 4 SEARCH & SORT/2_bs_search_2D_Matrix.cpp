#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix = { {1, 3, 5, 7},
                      {10, 11, 16, 20},
                      {23, 30, 34, 60} };
    int rows = matrix.size();
    int cols = matrix[0].size();
    int target = 11;

    int s = 0;
    int e = rows*cols - 1;
    int mid = s + (e - s)/2;

    while(s <= e){
        int element = matrix[mid/cols][mid%cols];

        if(element == target){
            cout << "found " << element;
            break;
        }
        else if(element < target){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return 0;
}