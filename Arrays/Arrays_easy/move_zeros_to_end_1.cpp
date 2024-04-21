#include <bits/stdc++.h>
using namespace std;
void move_zeros(int arr[], int n)
{
    int count = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            v.push_back(arr[i]);
        }
        else
        {
            count++;
        }
        //O(N)
    }
    int i = 0,nz=v.size();
    for (auto it : v)
    {
        arr[i++] = it;
        //O(x)
    }
    for (int i = nz; i < n; i++)
    {
        arr[i]=0;
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
//TC O(2N)
//SC O(N) if all elements are non zero