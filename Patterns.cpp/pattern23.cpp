#include <iostream>
using namespace std;

int main()
{
    int count;
    cin >> count;
    int temp;

    int val = 1;
    for (int i = count; i >= 1; i--)
    {
        temp = count;
        for (int j = 1; j <= count; j++)
        {
            cout << temp;
            if (temp > i)
                temp--;
        }
        cout << endl;
    }

    return 0;
}
