#include <bits/stdc++.h>
using namespace std;
void buy_sell_stocks(vector<int> v, int n)
{
    int profit = 0;
    int minimum = v[0];
    int cost;
    for (int i = 1; i <n; i++)
    {
        cost = v[i]-minimum;
        profit=max(profit,cost);
        minimum=min(minimum,v[i]);
    }
    cout<<profit;
}
int main()
{
    vector<int> v = {7, 1, 5, 3, 6, 4};
    int n = v.size();
    buy_sell_stocks(v,n);
    return 0;
}