#include <iostream>
using namespace std;
int temp, did_not_swap;
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            did_not_swap = 1;
            if (arr[i] > arr[j])
            {
                did_not_swap = 0;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        // optimized bubble sort
        if (did_not_swap)
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {9, 13, 20, 24, 46, 52};
    int n = sizeof(arr) / sizeof(int);
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Time complexity n + n-1 + n-3 +......2 = n(n+1)/2
// O((n^2/2)+n/2) which is equilant to O(n^2/2) which is equilant to O(n^2)
// in worst and avg cases complexity is nearabout O(n^2)
//in best case it is O(n)