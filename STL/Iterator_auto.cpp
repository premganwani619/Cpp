#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Vectors
    vector<int> v = {1, 2, 3, 4, 5};
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *(it) << endl;
    }
    // or use auto keyword
    // auto keyword automatically asigns datatype acording to data
    //   for (auto it =v.begin(); it < v.end(); it++)
    //  {
    //      cout<<*(it)<<endl;
    //  }
    //  for (auto it :v)
    //  {
    //      cout<<(it)<<endl;
    //  }
    //erase a single element
    // v.erase(v.begin() + 1);
    // for (auto it : v)
    // {
    //     cout << (it) << endl;
    // }
    //erase a range of element
    v.erase(v.begin()+1,v.begin()+3);//v.begin()+! is included and v.begin()+3 is excluded in range
    for (auto it:v)
    {
        cout<<it<<endl;
    }
    
    return 0;
}