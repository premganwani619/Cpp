#include <bits/stdc++.h>
using namespace std;
vector<int> linear_search(int arr[], int n, int key)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            v.push_back(i);
        }
    }
    return v;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 10, 10};
    int n = sizeof(arr) / sizeof(int), key;
    cin >> key;
    vector<int> v;
    v = linear_search(arr, n, key);
    if (v.size() == 0)
    {
        cout << "element not found";
    }
    else
    {
        cout<<"Element found at indexes: ";
        for (auto it:v)
        {
            cout<<it+1<<", ";
        }
        
    }

    return 0;
}
// Gives first occurence
// TC O(n)
// SC O(n)