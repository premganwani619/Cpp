#include <bits/stdc++.h>
using namespace std;
int max_subarray(vector<int> v, int n)
{
    int maxx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += v[k];
                maxx = max(maxx, sum);
            }
        }
    }
    return maxx;
}
int main()
{
    vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = v.size();
    cout << max_subarray(v, n);
    return 0;
}