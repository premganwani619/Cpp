#include <bits/stdc++.h>
using namespace std;
vector<int> v;
void union_of_arrays(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (v.size() == 0 || v.back() != arr1[i])
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (v.size() == 0 || v.back() != arr2[j])
            {
                v.push_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (v.back() != arr1[i])
        {
            v.push_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (v.back() != arr2[j])
        {
            v.push_back(arr2[j]);
        }
        j++;
    }
}
int main()
{
    int arr1[] = {1, 1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5, 6};
    int n1 = sizeof(arr1) / sizeof(int);
    int n2 = sizeof(arr2) / sizeof(int);
    union_of_arrays(arr1, n1, arr2, n2);
    for (auto it : v)
    {
        cout << it << " ";
    }

    return 0;
}

//TC = O(n1+n2)
//SC = O(n1+n2)