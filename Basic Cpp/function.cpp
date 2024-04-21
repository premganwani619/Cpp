#include <iostream>
using namespace std;
void printname(string name){
    cout<<"Hey! "<<name<<endl;
}
int sum(int a ,int b){
int c=a+b;
return c;
}
void dosomething(int num){
//Call by value
cout<<num<<endl;
num+=5;
cout<<num<<endl;
num+=5;
cout<<num<<endl;

}
int main()
{
    string name;
    cin>>name;
    printname(name);
    int num1,num2,num3;
    cin>>num1>>num2;
    num3=sum(num1,num2);
    cout<<num3<<endl;

int num=10;
dosomething(num);
cout<<num;

    return 0;
}