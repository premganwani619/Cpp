#include <bits/stdc++.h>
using namespace std;
int majority_element(vector<int> v, int n)
{
    int count = 0;
    int element;
    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            count = 1;
            element = v[i];
        }

        else if (v[i] == element)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    if (count)
    {
        return element;
    }
    return -1;
}
int main()
{
    vector<int> v = {2, 1, 2, 2, 2, 4, 5, 6, 2, 2};
    int n = v.size();
    cout << majority_element(v, n);
    return 0;
}
// Moore's algo
// TC O(N) + O(N) (if majority element might exist)