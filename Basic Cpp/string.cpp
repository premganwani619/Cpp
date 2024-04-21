#include<iostream>
using namespace std;
int main(){
    string s="Prem";
    cout<<s[0]<<endl;
    int len = s.size();
    cout<<len<<endl;
    s[len-1]='z';
    cout<<s[len-1];
    return 0;
}