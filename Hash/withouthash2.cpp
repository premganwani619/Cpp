#include <iostream>
using namespace std;
int count;
int freq_of_number(int num[], int arr[], int n, int Q)
{

    for (int i = 0; i < Q; i++)
    {
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (num[i] == arr[j])
            {
                count++;
            }
        }
        arr[i] = count;
    }

    return count;
}
int main()
{
    int n, Q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> Q;
    int num[Q];
    for (int i = 0; i < Q; i++)
    {
        cin >> num[i];
    }

    freq_of_number(num, arr, n,Q);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}
//Time complexity O(Q*n)