#include <iostream>
using namespace std;
int main()
{
    int q;
    char ch;
    string arr;
    int hashh[256]={0};
    cin>>arr;
    for (int i = 0; i < arr.size(); i++)
    {
        hashh[arr[i]]++;
    }
    //Fatch
    cin>>q;
    while (q--)
    {
        cin>>ch;
        cout<<ch<<"-->"<<hashh[ch]<<endl;
    }
    return 0;
}
// we used hash array size 256 because it was'nt stated that charactors are exclusive