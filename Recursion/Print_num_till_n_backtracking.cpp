#include <iostream>
using namespace std;
void print_name(int i, int n)
{
    if (i > 0)
    {
        print_name(i-1, n);
        cout<<i<<endl;
    }
    
}
int main()
{
    int n;
    cin >> n;
    print_name(n, n);

    return 0;
}