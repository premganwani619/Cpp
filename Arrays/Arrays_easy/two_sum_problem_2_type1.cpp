#include <bits/stdc++.h>
using namespace std;
int two_sum(vector<int> v, int k, int n)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((i != j) && ((v[i] + v[j]) == k))
            {
                flag = 1;
            }
        }
    }
    return flag;
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