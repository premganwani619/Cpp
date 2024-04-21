#include <iostream>
using namespace std;
int hashh[12]; //max size of array(int) is 10^7 if it is declared globally
//10^8 for bool
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
    //int hashh[12];
    //max size of array(int) is 10^6 if it is declared locally. at 10^7 it will throw segmantation fault
    //10^7 for bool
    //this pc has maximum 10^5 for array(int) local
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
