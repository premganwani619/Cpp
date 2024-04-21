#include <bits/stdc++.h>
using namespace std;
vector<int> intersaction_of_two_sorted_arrays(vector<int> A, vector<int> B)
{
    int n1 = A.size();
    int n2 = B.size();
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n1)
    {
        while (j < n2)
        {
            if (A[i] == B[j])
            {
                ans.push_back(A[i]);
                i++;
                j++;
            }
            if (A[i] > B[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
    }
    return ans;
}
int main()
{
    vector<int> A = {1, 2, 3, 3, 4, 5, 6, 7};
    vector<int> B = {3, 3, 4, 4, 5, 8};
    vector<int> ans;
    ans = intersaction_of_two_sorted_arrays(A, B);
    for (auto it : ans)
    {
        cout << it;
    }

    return 0;
}
//TC O(n1+n2)
//SC O(1)