#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,revnum=0;
    cin >> num;
    while (num)
    {
        revnum = (revnum*10)+num%10;   
        num /= 10;
    }
    cout<<revnum;
    return 0;
}