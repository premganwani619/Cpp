#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (i == 1 || i == count || j == 1 || j == count)
            {
                cout <<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}