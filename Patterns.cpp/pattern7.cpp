#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        for (int k = 1; k <= count-i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2*i-1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}