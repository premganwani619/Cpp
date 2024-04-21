#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Vectors
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    cout << v[0] << endl;
    cout << v[1] << endl;
    v.pop_back();
    cout << v[0] << endl;
    // Vector of a pair datatype
    vector<pair<int, int>> v1;
    v1.push_back({1, 2});
    v1.emplace_back(1, 2);

    // 5 instances of 100
    vector<int> v2(5, 100);
    // 5 instances of any garbage value
    vector<int> v3(5);
    // 5 instances of 20
    vector<int> v4(5, 20);
    // copy v3 into v2
    vector<int> v5(v4);
    vector<int>::iterator it = v.begin();
    cout<<*(it);
    //end,rend,rbegin are similar
    //in rend,rbegin if we increase iterator it moves in reverse side  <--
    return 0;
}