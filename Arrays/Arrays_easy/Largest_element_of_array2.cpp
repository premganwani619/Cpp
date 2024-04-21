#include <iostream>
using namespace std;
int largest_element(int arr[], int count)
{
    int max = arr[0];
    for (int i = 1; i < count; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
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
    cout << "Largest element is: " << largest_element(arr, n);
    return 0;
}
//Time complexity is O(n)