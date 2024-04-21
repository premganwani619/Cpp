#include <bits/stdc++.h>
using namespace std;
int longest_subarray(int arr[], int n, int k)
{
    int sum, len = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}
int main()
{
    int arr[] = {2, 3, 2, 1, 1, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    cout << longest_subarray(arr, n, k);

    return 0;
}