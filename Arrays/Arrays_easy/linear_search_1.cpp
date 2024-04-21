#include <iostream>
using namespace std;
int linear_search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(int), key;
    cin >> key;
    int pos = linear_search(arr, n, key);
    if (pos == -1)
    {
        cout << "element not found";
    }
    else
    {
        cout << "Element found at index: " << pos + 1;
    }

    return 0;
}
//Gives first occurence
//TC O(n)
//SC O(1)