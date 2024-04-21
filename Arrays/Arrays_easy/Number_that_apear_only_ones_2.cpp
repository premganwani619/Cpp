#include <iostream>
using namespace std;
int apear_ones(int arr[], int n)
{
    int i, j, max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        //O(N)
    }
    int hash[max + 1]={0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
        //O(N)
    }

    for (int i = 0; i <= max; i++)
    {
        if (hash[i]==1)
        {
            return i;
        }
        //O(N)
    }
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6};
    int n = sizeof(arr) / sizeof(int);
    int ans;
    ans = apear_ones(arr, n);
    cout << ans;
    return 0;
}
//TC O(N)+O(N)+O(N)
//SC O(Maximum element)
//We cant use array hashing while dealing with negative(-) or high numbers(10^7 10^9...)