// PRATA SPOJ- SHPERE ONLINE JUDGE
/*
Input:
3
10
4 1 2 3 4
8
1 1
8
8 1 1 1 1 1 1 1 1

Output:
12
36
1
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSolution(vector<int> cooksRank, int no_prata, int mid)
{

    // Intial Cooked Prata Count
    int curr_prata = 0;
    for (int i = 0; i < cooksRank.size(); i++)
    {
        int R = cooksRank[i];
        int j = 1;
        int timeTaken = 0;

        while (true)
        {
            if ((timeTaken + j * R) <= mid)
            {
                ++curr_prata;
                timeTaken += j * R;
                ++j;
            }
            else
            {
                break;
            }
        }
        if (curr_prata >= no_prata)
        {
            return true;
        }
    }
    return false;
}

int minTimeToCompleteOrder(vector<int> cooksRank, int no_prata)
{
    int start = 0;
    int highestRank = *max_element(cooksRank.begin(), cooksRank.end());
    int end = highestRank * (no_prata * (no_prata + 1) / 2);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossibleSolution(cooksRank, no_prata, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int no_prata, no_cook;
        cin >> no_prata >> no_cook;

        vector<int> cooksRank;

        while (no_cook--)
        {
            int ranks;
            cin >> ranks;
            cooksRank.push_back(ranks);
        }

        cout <<"Minimum Time to Complete Order: "<< minTimeToCompleteOrder(cooksRank, no_prata) << endl;
    }

    return 0;
}