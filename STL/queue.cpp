#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);//{1}
    q.push(2);//{1,2}
    q.push(3);//{1,2,3}
    q.push(4);//{1,2,3,4}
    q.emplace(5);//{1,2,3,4,5}
    q.back()+=4;//adds 4 to last element(5+4)
    cout<<q.back()<<endl;//9
    cout<<q.front()<<endl;//1
    q.pop();
    cout<<q.front()<<endl;//2
    //size swap emptry functions are same as stack
    //similar to stack all operations have O(1) complexity
    return 0;
}