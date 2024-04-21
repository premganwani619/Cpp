#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map <int, int> mp;
    int n,q,num;
    cin >> n;
    int arr[n];
    //Store and precompute
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    //fetch
for (auto it: mp)
{
    cout<<it.first<<"-->"<<it.second<<endl;
}

    // cin>>q;
    // while (q--)
    // {
    //     cin>>num;
    //     cout<<num<<"-->"<<mp[num]<<endl;
    // }
    
    return 0;
}
//In ordered map time complxity for storing and fatching takes O(log n) in all cases
//In unordered map time complxity for storing and fatching takes O(1) in best and avg case and O(sn) in worst cases
//In ordered map any data structure can be key
//In unordered map any data structure except pair ds can be key

