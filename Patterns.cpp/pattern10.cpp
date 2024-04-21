#include <iostream>
using namespace std;
void function1(int count)
{
    for (int i = 1; i <= count; i++)
    {
        for (int k = 1; k <= count - i+1; k++)
        {
            cout << "*";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= count - i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void function2(int count)
{
    for (int i = count; i >= 1; i--)
    {
        for (int k = 1; k <= count - i+1; k++)
        {
            cout << "*";
        }
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= count - i+1; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
int main()
{
    int count;
    cin >> count;
    function1(count);
    function2(count);
    return 0;
}