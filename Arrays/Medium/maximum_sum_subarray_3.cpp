#include <bits/stdc++.h>
using namespace std;
int kadane_algo(vector<int> v, int n)
{
    int maxx = INT_MIN;
    int sum = 0;
    int start, end;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum += v[i];
        if (sum > maxx)
        {
            maxx = sum;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }
    }
    cout << "Indixes are: " << start << " " << end;
    return maxx;
}
int main()
{
    vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = v.size();
    cout << " And: "<<kadane_algo(v, n) << " Is the maximum sum: ";
    return 0;
}