#include <bits/stdc++.h>
#include <set>
using namespace std;
int remove_duplicates(int arr[], int n)
{
    int i = 0;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
        //O(log(n)) to insert a element
        //n*O(log(n)) to insert n elements
    }
    for (auto it : s)
    {
        arr[i++] = it;
    }
    return s.size();
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int unique = remove_duplicates(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    cout << unique;

    return 0;
}
//Tc O(n*log(n)+n) 
//Sc O(n)