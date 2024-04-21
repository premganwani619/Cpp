#include <iostream>
using namespace std;
int is_sorted(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i]>arr[i+1])
        {
          return 0;
        }   
    }
    return 1;
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
    if (is_sorted(arr,n))
    {
        cout<<"Array is sorted ";
    }
    else{
        cout<<"Array is not sorted ";
    }
    
    return 0;
}
//Time complexity is O(n)