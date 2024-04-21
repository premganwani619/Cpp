#include <bits/stdc++.h>
using namespace std;
vector<int> two_sum(vector<int> v, int k, int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a = v[i];
        int more = k - a;
        if (mp.find(more) != mp.end())
        {
            return {mp[more],i};
        }
        mp[a] = i;
    }
    return {-1,-1};
}
int main()
{
    vector<int> v = {1, 4, 10, 3, 2, 9};
    int k = 7;
    int n = v.size();
    string str;
    vector <int> ans=two_sum(v, k, n);
    cout<<ans[0]<<" "<<ans[1];
    return 0;
}
//TC O(N* log(n)) ordered map
//TC O(N) BEST CASE of unordered map
//TC O(N*N) worst CASE of unordered map
