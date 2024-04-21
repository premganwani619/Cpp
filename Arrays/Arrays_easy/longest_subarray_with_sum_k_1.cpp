#include <bits/stdc++.h>
using namespace std;
int longest_subarray(int arr[], int n, int k)
{
    int sum, len = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (sum == k)
            {
                len = max(len, j + 1 - i);
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
//TC O(n^3)
//SC O(1)