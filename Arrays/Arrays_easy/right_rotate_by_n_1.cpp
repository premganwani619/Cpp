#include <bits/stdc++.h>
using namespace std;
void left_rotate(int arr[], int n, int k)
{
    if (k == 0)
    {
        return;
    }

    vector<int> v;
    int i;
    for (i =n-k; i<n; i++)
    {
        v.push_back(arr[i]);
    }
    for (i = 0; i <=k; i++)
    {
        v.push_back(arr[i]);
    }
    i=0;
    for (auto it : v)
    {
        arr[i++]=it;
    }
}
int main()
{
    int n, k;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> k;
    left_rotate(arr, n, k % n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}