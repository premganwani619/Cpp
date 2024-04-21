#include <bits/stdc++.h>
using namespace std;
void sort_zero_to_two(vector<int> &v, int n)
{
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    for (auto it : v)
    {
        if (it == 0)
        {
            count0++;
        }
        else if (it == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    v.clear();
    for (int i = 0; i < count0; i++)
    {
        v.push_back(0);
    }
    for (int i = 0; i < count1; i++)
    {
        v.push_back(1);
    }
    for (int i = 0; i < count2; i++)
    {
        v.push_back(2);
    }
}
int main()
{
    vector<int> v = {0, 1, 2, 0, 0, 1, 1, 2, 2, 0, 1, 2, 0, 2, 1};
    int n = v.size();
    sort_zero_to_two(v, n);
    for (auto it:v)
    {
        cout<<it;
    }
    
    return 0;
}
//Bruteforce approach is sorting algos
//Better approach is this one
//TC O(2*N)