#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int num1, num2, gcd;
    cin >> num1 >> num2;
    //O(min(num1,num2))
    for (int i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    //below code is better then upper one in most cases because it checks from behind
    //but worst case time complexity is same ex gcd or 11 and 13 is 1 
    //O(min(num1,num2))
    for (int i = min(num1, num2); i >= 1; i--)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
            break;
        }
    }

    cout << gcd;
    return 0;
}