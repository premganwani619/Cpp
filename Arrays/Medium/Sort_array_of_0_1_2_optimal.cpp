#include <bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void sort_zero_to_two(vector<int> &v, int n)
{
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
        if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            mid++;
            low++;
        }
       else if (v[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(v[mid],v[high]);
            high--;
        }
        
    }
}
int main()
{
    vector<int> v = {0, 1, 2, 0, 0, 1, 1, 2, 2, 0, 1, 2, 0, 2, 1};
    int n = v.size();
    sort_zero_to_two(v, n);
    for (auto it : v)
    {
        cout << it;
    }

    return 0;
}
//Dutch National Flag Algo
//TC O(n)