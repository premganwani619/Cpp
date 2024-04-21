#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (char i = 'A'; i < 'A'+count; i++)
    {
        for (char j = 'A'; j <= i; j++)
        {
            cout <<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}