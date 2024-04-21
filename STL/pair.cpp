#include <bits/stdc++.h>
using namespace std;
int main()
{
    //pairs
    pair<int, int> p1 = {1, 2};
    cout << p1.first << endl;
    cout << p1.second << endl;
    //nested pairs
    pair<int,pair<int,int>> p2={1,{2,3}}; 
    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;
    //array of pairs
    pair<int,int> arr[]={{1,2},{3,4},{5,6},{7,8},{9,10}};
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i].first<<endl;
        cout<<arr[i].second<<endl;
    }
    
    return 0;
}