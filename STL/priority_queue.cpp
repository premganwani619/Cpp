#include <bits/stdc++.h>
using namespace std;
int main()
{
    //maximum valued priority queue or max heap
    priority_queue<int> pq;
    //maxmimum valued element gets highest priority
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(3);//{2,3,5}
    pq.push(1);//{1,2,3,5}
    pq.emplace(4);//{1,2,3,4,5}
    pq.pop();//pops 5
    cout<<pq.top();// 4
    //minimum valued priority queue or min heap
    //minimimum valued element gets highest priority
    priority_queue<int,vector<int>,greater<int>> pq2;
    //same operations as maximum valued priority queue
    //push&pop-->logn
    //top O(1)
    return 0;
}