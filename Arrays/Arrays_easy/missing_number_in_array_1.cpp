#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n-1] = {1, 2, 3, 4};
    int flag;
    for (int i = 1; i <= n; i++)
    {
        flag=0;
        for (int j = 0; j < n-1; j++)
        {
            if (i==arr[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout <<i;
            break;
        }
    }
    return 0;
}
//Bruteforce approach
//TC (n^2)
//O(1)