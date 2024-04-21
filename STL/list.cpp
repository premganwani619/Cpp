#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Lists are similar to Vectors but Front insertion/deletion operations are also posible
    //vectors singly linkedlist
    //lists doubly linkedlist
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    for (auto it : ls)
    {
        cout << it << endl;
    }
    ls.pop_front();
    ls.pop_back();
    ls.push_back(6);
    ls.push_front(8);
    ls.emplace_back(10);
    ls.emplace_front(12);
    for (auto it : ls)
    {
        cout << it << endl;
    }
    //we can insert element in list from front side but not in vectors
    //so we use insert function to insert elements into vector but insert function is
    //very costly(time complexity>>)
    //rest of the functions are similar to vectors end,begin,rend,rbegin,size,swap,clear,insert
    return 0;
}