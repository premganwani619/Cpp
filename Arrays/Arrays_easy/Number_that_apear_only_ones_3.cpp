#include <bits/stdc++.h>
using namespace std;
int apear_ones(int arr[], int n)
{
    map<long long, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it: mp)
    {
        if(it.second==1){
            return it.first;
        }
    }
    
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = sizeof(arr) / sizeof(int);
    int ans;
    ans = apear_ones(arr, n);
    cout << ans;
    return 0;
}
//TC of ordered map O(n*log((n/2+1))) +O(n/2+1)
//SC O(n/2+1)
//TC of unordered map (n) in best and avg case O(n^2) in worst case(colision)