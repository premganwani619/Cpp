#include <iostream>
using namespace std;
int main()
{
    int count;
    char ch;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        for (int k = 1; k <= count - i; k++)
        {
            cout << " ";
        }
        int breakpoint = (2 * i - 1) / 2;
        ch='A';
        for (int j = 1; j <= 2 * i - 1; j++)
        {

            cout << ch;
            if (j <= breakpoint)
                ch++;
            else
                ch--;
        }
        cout << endl;
    }

    return 0;
}