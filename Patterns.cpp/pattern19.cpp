#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        for (char j = 'E'-i+1; j <= 'E'; j++)
        {
            cout <<j;
        }
        cout<<endl;
    }

    return 0;
}