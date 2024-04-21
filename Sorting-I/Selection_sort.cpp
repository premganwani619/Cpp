#include <iostream>
using namespace std;
int minimum, temp;
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        minimum = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minimum])
            {
                minimum = j;
            }
        }
        if (arr[i] > arr[minimum])
        {
            temp = arr[i];
            arr[i] = arr[minimum];
            arr[minimum] = temp;
        }
    }
}
int main()
{
    int arr[] = {9, 13, 20, 24, 46, 52}, temp, minimum;
    int n = sizeof(arr) / sizeof(int);
    selection_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
//Time complexity n + n-1 + n-3 +......2 = n(n+1)/2
//O((n^2/2)+n/2) which is equilant to O(n^2/2) which is equilant to O(n^2)
//in all cases complexity is nearabout O(n^2)