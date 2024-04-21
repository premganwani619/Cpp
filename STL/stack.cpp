#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    s.push(1);//{1}
    s.push(2);//{2,1}
    s.push(3);//{3,2,1}
    s.push(4);//{4,3,2,1}
    s.emplace(5);//{5,4,3,2,1}
    cout<<s.top()<<endl;//5
    s.pop();//pops 5
    cout<<s.top()<<endl;//4
    cout<<s.size()<<endl;//4
    cout<<s.empty()<<endl;//0
    stack<int>st1,st2;
    st1.swap(st2);//swap st1,st2
    //All the operations have O(1) complexity

    return 0;
}