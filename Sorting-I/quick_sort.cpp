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
    int arr[] = {1, 3, 6, 9, 2, 5, 8, 4, 6, 4};
    int n = sizeof(arr) / sizeof(int);
    cout << "Array before sorting is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    quick_sort(arr, 0, n - 1);
    cout << endl
         << "Array after sorting is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}