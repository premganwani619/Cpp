#include <iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    if (n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
    bubble_sort(arr, n - 1);
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
    bubble_sort(arr, n);
    cout << endl
         << "Array after sorting is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
