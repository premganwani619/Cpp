#include <bits/stdc++.h>
using namespace std;
set<int> union_of_arrays(int arr1[], int n1, int arr2[], int n2)
{
    set<int> v;
    for (int i = 0; i < n1; i++)
    {
        v.insert(arr1[i]);
        // O(n1*logn)
    }
    for (int i = 0; i < n2; i++)
    {
        v.insert(arr2[i]);
        // O(n2*logn)
    }

    return v;
    // O(n1+n2)
}
int main()
{
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    set<int> v = union_of_arrays(arr1, n1, arr2, n2);
    int arr[v.size()]; // O(n1+n2)
    int i = 0;
    for (auto it : v)
    {
        arr[i++] = it;
        // O(n1+n2)
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
// TC O(n1*logn) + O(n2*logn)+ O(n1+n2)
// SC O(2*(n1+n2))