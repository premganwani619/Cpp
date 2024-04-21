#include <iostream>
using namespace std;
//functional reccursion
//we use functional reccursion when we want a value in return and not to print by function itself
int recursive_sum(int num)
{
    if (num==0)
    {
        return 1;
    }
     
    return  num * recursive_sum(num - 1);
}
int main()
{
    int num;
    cin >> num;
    int res;
    res=recursive_sum(num);
    cout<<res;
    return 0;
}