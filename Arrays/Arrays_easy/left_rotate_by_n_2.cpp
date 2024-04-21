#include <bits/stdc++.h>
using namespace std;
int temp;
void left_rotate(int arr[], int n, int k)
{
    reverse(arr, arr + (n - k));
    reverse(arr + (n - k), arr + n);
    reverse(arr, arr + n);
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
//TC O(d)+O(n-d)+O(n) = O(2n)
//SC O(1)