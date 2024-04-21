#include <bits/stdc++.h>
using namespace std;
vector<int> intersaction_of_two_sorted_arrays(vector<int> A, vector<int> B)
{
    int n1 = A.size();
    int n2 = B.size();
    vector<int> visited(n2, 0);
    vector<int> ans;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (A[i] == B[j] && visited[j] == 0)
            {
                ans.push_back(A[i]);
                visited[j] = 1;
                break;
            }
            if (B[j] > A[i])
            {
                break;
            }
        }
    }
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
//TC O(n1*n2)
//SC O(n2)