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
        cout << "String" << endl;
        i++;
    }
    print_name(i, n);
}
int main()
{
    int n;
    cin >> n;
    print_name(1, n);

    return 0;
}