#include <iostream>
using namespace std;
int main()
{
    int q;
    char ch;
    string arr;
    int hashh[12]={0};
    cin>>arr;
    for (int i = 0; i < arr.size(); i++)
    {
        hashh[arr[i]-'a']++;
    }
    //Fatch
    cin>>q;
    while (q--)
    {
        cin>>ch;
        cout<<ch<<"-->"<<hashh[ch-'a']<<endl;
    }
    
    return 0;
}
//we can always choose arrays for charactor hashing because total charactors are 256 that can be stored in array easily 