#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void move_zeros(int arr[], int n)
{
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
        //O(x)
    }
    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
        //O(N-x)
    }
}
int main()
{
    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    int n = sizeof(arr) / sizeof(int);
    move_zeros(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// TC O(N)
// SC O(1)