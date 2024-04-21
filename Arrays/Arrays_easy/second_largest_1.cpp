#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}
void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int PI = partition(arr, low, high);
        quick_sort(arr, low, PI - 1);
        quick_sort(arr, PI + 1, high);
    }
    return;
}
int main()
{
    int n,sec_max=-1;
    // sec_max= INT32_MIN;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quick_sort(arr, 0, n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i]>sec_max&&arr[i]!=arr[n-1])
        {
            sec_max=arr[i];
        }
    }
cout<<"Second max is: "<<sec_max;
    return 0;
}

//Time complexity is O(n*log(n)+n)