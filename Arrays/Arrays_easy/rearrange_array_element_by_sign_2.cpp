#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange_array(vector<int> &v, int n)
{
    vector<int> ans(n, 0);
    int pos = 0, neg = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] >= 0)
        {
            ans[pos] = v[i];
            pos += 2;
        }
        else
        {
            ans[neg] = v[i];
            neg += 2;
        }
    }
    return ans;
}
int main()
{

    vector<int> v = {-2, 3, 5, -1, -3, 9};
    vector<int> ans;
    int n = v.size();
    ans=rearrange_array(v, n);
    for (auto it : ans)
    {
        cout << it << " ";
    }

    return 0;
}
// TC O(N)
// SC O(N)