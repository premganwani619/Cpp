#include <iostream>
using namespace std;
int main()
{
    int count,stars;
    cin >> count;
    for (int i = 1; i <= ((2*count)-1); i++)
    {   stars=i<=count?i:(2*count-i);
        for (int j = 1; j <= stars; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }

    return 0;
}