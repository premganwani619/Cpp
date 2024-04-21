#include <iostream>
using namespace std;
int i,j,temp;
void insertion_sort(int arr[], int n)
{
    for (i = 0; i < n - 1; i++)
    {
        j=i;
        while(j > 0 && arr[j-1]>arr[j])
        {
                temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j-1] = temp;
                j--;
        }
    }
}
int main()
{
    int arr[] = {9, 13, 20, 24, 46, 52};
    int n = sizeof(arr) / sizeof(int);
    insertion_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
//Worst and avg case O(n^2)
//Best case O(n)