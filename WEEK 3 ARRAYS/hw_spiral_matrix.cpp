#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> matrix{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    vector<int> ans;

    int rows = matrix.size();
    int cols = matrix[0].size();

    int st_row = 0;
    int e_row = rows - 1;
    int st_col = 0;
    int e_col = cols - 1;

    // starting row
    while (st_row <= e_row && st_col <= e_col)
    {

        for (int i = 0; i < cols; i++)
        {
            if (matrix[st_row][i] != -999)
            {
                ans.push_back(matrix[st_row][i]);
                // cout << matrix[st_row][i] << " ";
                matrix[st_row][i] = -999;
            }
        }
        st_row++;
        // cout << endl;

        // ending col

        for (int i = 0; i < rows; i++)
        {
            if (matrix[i][e_col] != -999)
            {
                ans.push_back(matrix[i][e_col]);
                // cout << matrix[i][e_col] << " ";
                matrix[i][e_col] = -999;
            }
        }
        e_col--;
        // cout << endl;

        // ending row

        for (int i = cols - 1; i >= 0; i--)
        {
            if (matrix[e_row][i] != -999)
            {
                ans.push_back(matrix[e_row][i]);
                // cout << matrix[e_row][i] << " ";
                matrix[e_row][i] = -999;
            }
        }
        e_row--;
        // cout << endl;

        // starting col

        for (int i = rows - 1; i >= 0; i--)
        {
            if (matrix[i][st_col] != -999)
            {
                ans.push_back(matrix[i][st_col]);
                // cout << matrix[i][st_col] << " ";
                matrix[i][st_col] = -999;
            }
        }
        st_col++;
        // cout << endl;
    }

    // return ans;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}