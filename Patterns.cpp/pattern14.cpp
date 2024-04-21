#include <iostream>
using namespace std;
int main()
{
    int count,val=1;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout <<val++<<" ";
        }
        cout<<endl;
    }

    return 0;
}