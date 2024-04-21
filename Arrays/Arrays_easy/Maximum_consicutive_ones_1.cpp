#include <iostream>
using namespace std;
void max_consecutive_ones(int arr[], int n)
{

    int i = 0, j = 0, low = -1, high = -1;
    while (i < n && j < n)
    {
        while (arr[i] != 1 && i < n)
        {
            i++;
        }
        j = i;
        while (arr[j] == 1 && j < n)
        {
            j++;
        }
        j -= 1;
        if ((high - low) < (j - i))
        {
            low = i;
            high = j;
        }
        i=j+1;
    }
    cout<<"Maximum number of consecutive 1s is: "<<high-low<<" between index : "<<low<<" "<<high;
}
int main()
{
    int arr[] = {2, 1, 1, 3, 4, 1, 1, 1, 6, 1, 1};
    int n = sizeof(arr) / sizeof(int);
    max_consecutive_ones(arr, n);
    return 0;
}
//TC O(N^2)
//SC O(1)
