#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> nums
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = nums.size();
    int cols = nums[0].size();

    for(int c = 0; c < cols; c++){
        if(c % 2 == 0){
            for(int r = 0; r < rows; r++){
                cout << nums[r][c] << " ";
            }
        }
        else{
            for(int r = rows - 1; r >= 0; r--){
                cout << nums[r][c] << " ";
            }
        }
        cout << endl;
    }
    return 0;

}