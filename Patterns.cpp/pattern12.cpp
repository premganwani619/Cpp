#include <iostream>
using namespace std;
int main()
{
    int count, val;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        val = i % 2 == 0 ? 1 : 0;
        for (int j = 0; j <= i; j++)
        {
            cout <<val;
            val=!val;
        }
        cout << endl;
    }

    return 0;
}