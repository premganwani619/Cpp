#include <bits/stdc++.h>
using namespace std;
int majority_element(vector<int> v, int n)
{
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[v[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > (n / 2))
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {2, 1, 2, 2, 2, 4, 5, 6, 2, 2};
    int n = v.size();
    cout << majority_element(v, n);
    return 0;
}
//TC O(n+log(n))
//SC O(n)