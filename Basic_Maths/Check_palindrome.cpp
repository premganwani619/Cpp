#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, count, revnum = 0, temp;
    cin >> num;
    temp = num;
    while (temp)
    {
        revnum = (revnum * 10) + temp % 10;
        temp /= 10;
    }
    num == revnum ? cout << "Number is palindrome" : cout << "Number is Not palindrome";
    return 0;
}