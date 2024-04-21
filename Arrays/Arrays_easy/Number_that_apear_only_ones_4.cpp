#include <bits/stdc++.h>
using namespace std;
int apear_ones(int arr[], int n)
{
    int exor=0;
    for (int i = 0; i < n; i++)
    {
       exor = exor ^ arr[i];
    }
    return exor;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = sizeof(arr) / sizeof(int);
    int ans;
    ans = apear_ones(arr, n);
    cout << ans;
    return 0;
}
//TC O(N)
//SC O(1)