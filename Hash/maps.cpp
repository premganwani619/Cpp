#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
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
    cin>>q;
    while (q--)
    {
        cin>>num;
        cout<<num<<"-->"<<mp[num]<<endl;
    }
    
    return 0;
}
// ordered and unorderd maps are used in cpp for number hashing
// we can also hash huge numbers 10^9 10^10....
//maps are memory efficient
//for example if array is 0,1,2,3,4,12 we need only 6 size array to store it in map
//maps stores in sorted order