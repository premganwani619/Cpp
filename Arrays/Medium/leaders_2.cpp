#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> v)
{
    int n = v.size();
    vector<int> ans;
    int maxx=INT_MIN;
    for (int i = n-1; i >= 0; i--)
    {
        if(v[i]>maxx){
            ans.push_back(v[i]);
        }
        maxx=max(maxx,v[i]);
    }
    return ans;
    //we can also sort or reverse before return
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
//TC O(N) without sort
//SC O(N) 