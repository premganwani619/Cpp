#include <iostream>
using namespace std;
int main()
{
    int n = 5,xor1=0,xor2=0;
    int arr[n] = {1, 2, 3, 4};
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^(i+1);
        xor2 = xor2 ^ arr[i];
    }
    cout<<"Missing element is: "<<(xor1 ^ xor2);

    return 0;
}
//optimal solution
//TC O(n)
//SC O(1)
//It is slightly better then the sum approach
//example if n is 10^5 then the sum will be ((10^5)*((10^5)+1))/2 which will be 10^10
//so in this approach we need long or long long data type
//but in the case of xor the xor of 10^5 numbers can be easily stored in int