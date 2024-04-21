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
    for (i = 0; i < k; i++)
    {
        v.push_back(arr[i]);
    }
    for (i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    for (auto it : v)
    {
        arr[i - k] = it;
        i++;
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
//TC O(d)+O(n-d)+O(d) = O(n+d)
//SC O(d)
