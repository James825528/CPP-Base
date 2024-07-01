#include<iostream>
#include <thread>
#include <chrono>
using namespace std;


void func1()
{
    cout<<"Calling Thread from function pointer :"<<this_thread::get_id()<<endl;
    std::this_thread::sleep_for(std::chrono::seconds(1));
}
class functor{
    public:
    bool operator()(int x){
        cout<<"Calling from functor:"<<this_thread::get_id()<<endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));

    }
};
int main(){


    thread th1(func1);
    int takes=100;
    thread th2([&takes](){
        std::this_thread::sleep_for(std::chrono::seconds(2));

        cout<<"Calling Thread from Lambda function :"<<this_thread::get_id()<<endl;
    });
    for(int i=0;i<5;i++)
    {
        cout<<"Doing Other work :"<<i+1<<endl;
    }
    thread th3(functor(),10);
    th1.join();
    th2.detach();

    th3.join();
    cin.get();
}
