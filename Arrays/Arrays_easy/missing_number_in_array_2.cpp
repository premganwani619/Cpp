#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 3, 4};
    int hash[n + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            cout << "missing number is: " << i;
        }
    }
    return 0;
}
// TC O(n+n)
// SC (n)