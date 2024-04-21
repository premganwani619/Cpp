#include <bits/stdc++.h>
using namespace std;
void right_rotate(int arr[], int n, int k)
{
    reverse(arr, arr + (n - k));
    reverse(arr + (n - k), arr + n);
    reverse(arr, arr + n);
    reverse(arr,arr+k);
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
    right_rotate(arr, n, k % n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
