#include <bits/stdc++.h>
using namespace std;
void next_permutation_of_array(vector<int> &v)
{
    int n = v.size();
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (v[i] < v[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        reverse(v.begin(), v.end());
        return;
    }
    for (int i = n - 1; i > index; i--)
    {
        if (v[i] > v[index])
        {
            swap(v[index], v[i]);
            break;
        }
    }
    reverse(v.begin() + index + 1, v.end());
    return;
}
int main()
{
    vector<int> v = {2, 1, 5, 4, 3, 0, 0};
    next_permutation_of_array(v);
    for (auto it : v)
    {
        cout << it<<" ";
    }

    return 0;
}
//TC O(3N)
//SC O(1)