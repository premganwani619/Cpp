#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp;
    int n;
    cin >> n;
    int arr[n];
    pair<int,int> high,low;
    high.first=0;
    low.first=0;
    high.second=-1;
    low.second=n+1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    } 
    for (auto it : mp)
    {
        cout << it.first << "-->" << it.second << endl;
        if(it.second>high.second){
            high.second=it.second;
            high.first=it.first;
        }
        if(it.second<low.second){
            low.second=it.second;
            low.first=it.first;
        }
    }
    cout<<"highest occuring element is "<<high.first<<"-->"<<high.second<<endl;
    cout<<"Lowest occuring element is "<<low.first<<"-->"<<low.second<<endl;
    return 0;
}
