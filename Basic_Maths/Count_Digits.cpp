#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,count=0;
    cin>>num;
    // while (num)
    // {
    //     num/=10;
    //     count++;
    // }
    // cout<<count;
    //or
    count=int(log10(num)+1);
    cout<<count;
    //complexity = O(log10(n))

    return 0;
}