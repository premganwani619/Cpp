#include <bits/stdc++.h>
using namespace std;
void rev_array(int arr[], int i, int n)
{
    int temp;
    if (i < n - i - 1)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        rev_array(arr, i + 1, n);
    }
    return;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    rev_array(arr, 0, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}