#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int flag=1;
   //O(sqrt(num))
    for (int i = 2; i*i <=num; i++)
    {
        if (num % i == 0)
        {
            flag=0;
            break;
        }
    }
    if (flag)
    {
        cout<<"Number is palindrome";
    }
    else{
        cout<<"Number is not palindrome";
    }
    return 0;
}