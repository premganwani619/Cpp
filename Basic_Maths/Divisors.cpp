#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    //O(n)
    // for (int i = 1; i <= num/2; i++)
    // {
    //     if (num % i == 0)
    //     {
    //         cout <<i<<" ";
    //     }
    // }
    // cout<<num;
    //or
    vector<int> v;
    //O(sqrt(num))
     for (int i = 1; i*i<=num /*sqrt(num)*/; i++)//(sqrt() is a function which takes a time)
    {
        if (num % i == 0)
        {
            v.push_back(i);
            if(i!=num/i){
               v.push_back(num/i);
            }
        }
    }
    //O(factors*log(factors))
    sort(v.begin(),v.end());
    //O(factors)
for (auto it:v)
{
    cout<<it<<" ";
}

    return 0;
}