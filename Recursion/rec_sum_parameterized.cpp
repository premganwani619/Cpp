#include <iostream>
using namespace std;
int sum=0;
//parameterized reccursion
void recursive_sum(int i, int num)
{
    if (i < 1)
    {
        cout <<sum;
    }
    else{
        sum+=i;
        recursive_sum(i-1, num);
        return;
    }
}
int main()
{
    int num;
    cin >> num;
    recursive_sum(num, num);
    return 0;
}