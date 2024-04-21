#include <bits/stdc++.h>
using namespace std;
int two_sum(vector<int> v, int k, int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a = v[i];
        int more = k - a;
        if (mp.find(more) != mp.end())
        {
            return 1;
        }
        mp[a] = i;
    }
    return 0;
}
int main()
{
    vector<int> v = {1, 4, 10, 3, 2, 9};
    int k = 7;
    int n = v.size();
    if (two_sum(v, k, n))
    {
        cout << "Yes element exists";
    }
    else
    {
        cout << "No element do not exists";
    }
    return 0;
}