#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main()
{

    vector<int> x = {1, 5, 10, 20, 40, 80};
    vector<int> y = {6, 7, 20, 80, 100};
    vector<int> z = {3, 4, 15, 20, 30, 70, 80, 120};

    set<int> st;
    // In a set elements are not repeated

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < x.size() && j < y.size() && k < z.size())
    {
        if (x[i] == y[j] && y[j] == z[k])
        {
            // in sets we use insert instead of push_bac
            st.insert(x[i]);
            i++;
            j++;
            k++;
        }
        else if (x[i] < y[j])
        {
            i++;
        }
        else if (y[j] < z[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    // this is how to print elements form a set only MUST
    for (auto i = st.begin(); i !=
                              st.end();
         i++)
        cout << *i << ' ';
}