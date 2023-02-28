// MINIMUM TIME DIFFERANCE
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinDifference(vector<string> &timePoints)
{
    // STEP 1: CONVERT TIME STRING INTO MINUTES INTEGER VALUES
    vector<int> minutes;

    for (int i = 0; i < timePoints.size(); i++)
    {
        string curr = timePoints[i];

        // stoi() converts string to integer
        int hours = stoi(curr.substr(0, 2));
        int mins = stoi(curr.substr(3, 2));
        int totalMinutes = hours * 60 + mins;
        minutes.push_back(totalMinutes);
    }

    // STEP 2: SORT
    sort(minutes.begin(), minutes.end());

    // STEP 3: FIND DIFFERENCE AND CALCULATE MINIMUM DIFFERENCE
    int mini = INT_MAX;
    int n = minutes.size();

    for (int i = 0; i < n - 1; i++)
    {
        int diff = minutes[i + 1] - minutes[i];
        mini = min(mini, diff);
    }


    // ------------IMPORTANT-------------
    //***Note: Time is Circular in Nature***//
    // 24 hours is equivalent to 1440 minutes 


    // STEP 4:
    int lastDiff = (minutes[0] + 1440) - minutes[n - 1];
    mini = min(mini, lastDiff);

    return mini;
}

int main()
{
    // vector<string> timePoints = {"23:59", "00:00"};
    vector<string> timePoints = {"00:00","23:59","00:00"};

    cout << findMinDifference(timePoints) << endl;
    return 0;
}