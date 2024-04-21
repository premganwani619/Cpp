#include <iostream>
using namespace std;
int main()
{
    int n = 5, count = (n*(n+1))/2, actual_count = 0;
    int arr[n-1] = {1, 2, 3, 4};
    for (int i = 0; i < n-1; i++)
    {
        actual_count += arr[i];
    }
    cout << "missing number is " << count - actual_count;
    return 0;
}
//optimal solution
//TC O(n)
//SC O(1)