#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<j;
        }
        for (int j = 1; j <= 2*(count-i); j++)
        {
            cout <<" ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout <<j;
        }
        cout<<endl;
    }

    return 0;
}