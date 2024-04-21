#include <bits/stdc++.h>
using namespace std;
void two_sum(vector<int> v, int k, int n)
{
    int left = 0;
    int right = n - 1;
    sort(v.begin(),v.end());
    while (left < right)
    {
        if (v[left] + v[right] == k)
        {
            cout << "Yes";
            return;
        }
        else if (v[left] + v[right] < k)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    cout<<"No";
}
int main()
{
    vector<int> v = {1, 4, 10, 3, 2, 9};
    int k = 7;
    int n = v.size();
    two_sum(v, k, n);
    return 0;
}
//TC O(N)+O(N*log(N))
//SC O(1)