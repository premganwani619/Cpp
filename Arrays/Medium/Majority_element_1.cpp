#include <bits/stdc++.h>
using namespace std;
int majority_element(vector<int> v, int n)
{
    int count;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (v[i] == v[j])
            {
                count++;
            }
        }
        if (count > (n / 2))
        {
            return v[i];
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
//Bruteforce approach
//TC O(N*N)
//SC O(1)