#include <bits/stdc++.h>
using namespace std;
void rev_array(int arr[], int i, int n)
{
    if (i < n - i - 1)
    {
        if (arr[i] == arr[n - i - 1])
        {
            rev_array(arr, i + 1, n);
        }
        else
        {
            cout << "Not palindrome";
        }
    }
    else
    {
        cout << "Palindrome";
    }
}
int main()
{
    int arr[] = {1, 2, 3, 2, 5};
    rev_array(arr, 0, 5);
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    return 0;
}