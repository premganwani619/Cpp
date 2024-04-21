#include <iostream>
using namespace std;
int main()
{
    int count,stars,spaces;
    cin >> count;
    for (int i = 1; i <= ((2*count)-1); i++)
    {   stars=i<=count?i:(2*count-i);
        spaces=i<=count?2*(count-i):2*(i-count);
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= spaces; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= stars; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }

    return 0;
}