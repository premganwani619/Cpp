#include <iostream>
using namespace std;
int fact=1;
//parameterized reccursion
void recursive_fact(int i, int num)
{
    if (i > num)
    {
        cout <<fact;
    }
    else{
        fact*=i;
        recursive_fact(i+1, num);
        return;
    }
}
int main()
{
    int num;
    cin >> num;
    recursive_fact(1, num);
    return 0;
}