#include<iostream>
using namespace std;

int function(int a,int b)
{
    return a+b;
}
int foo(int a,auto x)
{
    cout<<"Inside foo\n";
    cout<<x(2,3)<<endl;
}
int main(){
    
    int (*func)(int ,int );
    func=function;

    cout<<"In Main func:"<<func(1,2)<<endl;

    foo(1,func);
    auto f=function;
    cout<<"Using Auto Keyword:"<<f(10,10)<<endl;
    cin.get();    
}
