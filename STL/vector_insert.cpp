#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(2, 100);
    v.insert(v.begin(), 300);
    // for (auto it : v)
    // {
    //     cout << it << endl;
    // }
    v.insert(v.begin() + 1, 2, 10);
    // for (auto it : v)
    // {
    //     cout << it << endl;
    // }
    vector<int> copy(2,50);
    v.insert(v.begin(),copy.begin(),copy.end());
    // for (auto it : v)
    // {
    //     cout << it << endl;
    // }
    //size
    cout<<v.size();
    //v.pushback()
    // v.swap(copy);//swaps vector v and vector copy
    // v.clear();//erases the vector
    //v.empty() return 0 if empty else 1
    return 0;
}