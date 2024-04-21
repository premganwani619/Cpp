#include <iostream>
using namespace std;
int main()
{
    int count;
    cin >> count;
    for (int i = 1; i <= count; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (count - i) + 1; j++)
        {
            cout << "*";
        }
        for (int k = 1; k <= i; k++)
        {
            //code will run same even without this loop
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
/*
 ********* 
  *******
   *****
    ***
     *
*/