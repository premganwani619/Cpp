#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> v)
{
    int n = v.size();
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (v[i] < v[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            ans.push_back(v[i]);
        }
    }
    return ans;
}
int main()
{
    vector<int> v = {10, 22, 12, 3, 0, 6};
    vector<int> ans = leaders(v);
    for (auto it: ans)
    {
       cout<<it<<" ";
    }
    
    return 0;
}