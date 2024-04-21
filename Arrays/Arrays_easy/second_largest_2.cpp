#include <iostream>
using namespace std;
int second_largest_element(int arr[], int count)
{
    int max = arr[0];
    int sec_max = -1;
    // sec_max=INT32_MIN;
    for (int i = 1; i < count; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 0; i < count; i++)
    {
        if (arr[i] != max && arr[i] > sec_max)
        {
            sec_max=arr[i];
        }
    }
    return sec_max;
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
    cout << "second largest element is: " << second_largest_element(arr, n);
    return 0;
}
//works fine if there are no negative numbers
