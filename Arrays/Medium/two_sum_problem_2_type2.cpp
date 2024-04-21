#include <bits/stdc++.h>
using namespace std;
void two_sum(vector<int> v, int k, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if ((i != j) && ((v[i] + v[j]) == k))
            {
                cout <<"Indices are: "<< i << " " <<j;
                return;
            }
        }
    }
}
int main()
{
    vector<int> v = {1, 4, 10, 3, 2, 9};
    int k = 7;
    int n = v.size();
    two_sum(v, k, n);
    return 0;
}
