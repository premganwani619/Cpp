#include <iostream>
using namespace std;
int apear_ones(int arr[], int n, int count)
{
    int i, j, occurence;
    for (i = 1; i <= count; i++)
    {
        occurence = 0;
        for (j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                occurence++;
            }
        }
        if (occurence == 1)
        {
            return i;
        }
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = sizeof(arr) / sizeof(int);
    int ans, count = 6;
    ans = apear_ones(arr, n, count);
    cout << ans;
    return 0;
}
// TC (n^2)
// SC O(1)