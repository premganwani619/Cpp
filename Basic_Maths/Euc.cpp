#include <iostream>
using namespace std;
int main()
{
    int num1, num2, gcd;
    cin >> num1 >> num2;
    while (num1 > 0 && num2 > 0)
    {
        if (num1 >= num2)
        {
            num1 = num1 % num2;
        }
        else
        {
            num2 = num2 % num1;
        }
    }
    if (num1 == 0)
    {
        gcd = num2;
    }
    else
    {
        gcd = num1;
    }
    cout << gcd;
    return 0;
}