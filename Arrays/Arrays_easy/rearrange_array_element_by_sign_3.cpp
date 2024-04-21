#include <bits/stdc++.h>
using namespace std;
void rearrange_array(vector<int> &v, int n)
{
    vector<int> pos;
    vector<int> neg;
    for (auto it : v)
    {
        if (it > 0)
        {
            pos.push_back(it);
        }
        else
        {
            neg.push_back(it);
        }
    }
    if (pos.size() < neg.size())
    {
        for (int i = 0; i < pos.size(); i++)
        {
            v[2 * i] = pos[i];
            v[(2 * i) + 1] = neg[i];
        }
        int index = 2 * pos.size();
        for (int i = pos.size(); i < neg.size(); i++)
        {
            v[index] = neg[i];
            index++;
        }
    }
        if (neg.size() < pos.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            v[2 * i] = pos[i];
            v[(2 * i) + 1] = neg[i];
        }
        int index = 2 * neg.size();
        for (int i = neg.size(); i < pos.size(); i++)
        {
            v[index] = pos[i];
            index++;
        }
    }
}
int main()
{

    vector<int> v = {-2, 3, 5, -1, -3, 9, 1, 2, 3};
    int n = v.size();
    rearrange_array(v, n);
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}
// TC O(N)+O(N)
// SC O(N)