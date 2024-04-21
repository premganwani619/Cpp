#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num1,num2=0;
    cin >> num1;
    int temp=num1;
    while (num1)
    {
        num2+=cbrt(num1%10);
        num1 /= 10;
    }
    temp==num2?cout<<"Armstrong Number":cout<<"Not a armstrong number";
    
    return 0;
}