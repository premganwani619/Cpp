#include <iostream>
using namespace std;
void insertion_sort(int arr[], int n)
{

    if (n == 0)
    {
        return;
    }
    insertion_sort(arr, n - 1);
    int j = n - 1;
    while (j > 0 && arr[j - 1] > arr[j])
    {
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;
        j--;
    }
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
    insertion_sort(arr, n);
    cout << endl
         << "Array after sorting is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}