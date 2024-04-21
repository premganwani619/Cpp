#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = count-1; i >= 0; i--)
    {
        for (char j = 'A'; j <= 'A'+i; j++)
        {
            cout <<j<<" ";
        }
        cout << endl;
    }

    return 0;
}