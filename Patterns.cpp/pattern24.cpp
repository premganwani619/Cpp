#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count, left, top, right, bottom;
    cin >> count;

    for (int i = 0; i < 2 * count - 1; i++)
    {
        for (int j = 0; j < 2 * count - 1; j++)
        {
            top = i;
            left = j;
            right = 2*count-2-j;
            bottom=2*count-2-i;
            cout<<count-min(min(top,bottom),min(left,right));
        }
        cout << endl;
    }

    return 0;
}
