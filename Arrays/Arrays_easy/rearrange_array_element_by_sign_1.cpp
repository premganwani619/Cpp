#include <bits/stdc++.h>
using namespace std;
void rearrange_array(vector<int> &v, int n)
{
    vector<int> pos;
    vector<int> neg;
    for (auto it : v)
    {
        if (it >= 0)
        {
            pos.push_back(it);
        }
        else
        {
            neg.push_back(it);
        }
    }
    for (int i = 0; i < n; i++)
    {
        v[2 * i] = pos[i];
        v[(2 * i) + 1] = neg[i];
    }
}
int main()
{

    vector<int> v = {-2, 3, 5, -1, -3, 9};
    int n = v.size();
    rearrange_array(v, n);
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}
// TC O(N)+O(N/2)
// SC O(N)