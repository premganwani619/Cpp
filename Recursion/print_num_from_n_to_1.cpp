#include <iostream>
using namespace std;
void print_name(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    else
    {   
        cout <<i<< endl;
    }
    print_name(i-1, n);
}
int main()
{
    int n;
    cin >> n;
    print_name(n, n);

    return 0;
}