#include <iostream>
using namespace std;
void print_name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    else
    {   
        cout <<i<< endl;
    }
    print_name(i+1, n);
}
int main()
{
    int n;
    cin >> n;
    print_name(1, n);

    return 0;
}