#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = count; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<j;
        }
        cout << endl;
    }

    return 0;
}