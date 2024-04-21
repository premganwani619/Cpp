#include <iostream>
using namespace std;
int fibonacci(int num)
{
    if (num <= 1)
    {
        return num;
    }
    else
    {
        return (fibonacci(num - 1) + fibonacci(num - 2));
    }
}
int main()
{
    int num;
    cin >> num;
    cout << fibonacci(num);
    return 0;
}