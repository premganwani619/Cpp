#include <iostream>
using namespace std;
int main()
{
    int count, num,q;
    cin >> count;
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        cin >> arr[i];
    }
    //Pre compute
    int hashh[12]={0}; // hash or frequency array
    for (int i = 0; i < count; i++)
    {
        hashh[arr[i]]++;
    }
    //Fatch
    cin>>q;
    while (q--)
    {
        cin>>num;
        cout<<num<<"-->"<<hashh[num]<<endl;
    }
    
    return 0;
}
// Hashing is one of the most important topic in DSA
// which is used to solve a lot of problems
// hashing means precompute and fatching