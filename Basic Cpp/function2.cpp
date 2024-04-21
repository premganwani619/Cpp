#include <bits/stdc++.h>
using namespace std;

void dosomething(string &s){
//Call by refrence
s[0]='t';
cout<<s<<endl;
}
int main()
{
    string s="raj";
    dosomething(s);
    cout<<s<<endl;
    return 0;
}