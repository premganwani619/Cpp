#include <iostream>
using namespace std;
void print_name(int i, int n)
{
    if (i <= n)
    {
        print_name(i + 1, n);
        cout << i << endl;
    }
    
    return;
}
int main()
{
    int n;
    cin >> n;
    print_name(1, n);

    return 0;
}