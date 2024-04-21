#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 1, 5, 4, 3, 0, 0};
    next_permutation(v.begin(), v.end());
    for (auto it : v)
    {
        cout << it;
    }

    return 0;
}