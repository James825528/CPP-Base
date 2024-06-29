#include<iostream>
#include "DummyInterface.h"
using namespace std;


class JamesConcrete : public DummyInterface::James{
    public:
    void getName()
    {
        cout<<"GetName:Inside JamesConrete Class 1\n";
    }
    void getSpace()
    {
        cout<<"GetSpace:Inside JamesConrete Class 1\n";
    }
    void myOwn()
    {
        cout<<"MyOwn:Inside JamesConrete Class 1\n";

    }
};

namespace AnotherNamespace
{
    class JamesConcrete : public DummyInterface::James
    {
        public:
        void getName()
        {
            cout<<"GetName:Inside JamesConrete 2 Class 1\n";
        }
        void getSpace()
        {
            cout<<"GetSpace:Inside JamesConrete 2 Class 1\n";
        }
        void myOwn()
        {
            cout<<"MyOwn:Inside JamesConrete 2 Class 1\n";

        }
    };
}

int main(){
    cout<<"Hello, James\n";
    JamesConcrete j1;
    j1.getName();
    j1.getSpace();
    j1.myOwn();
    AnotherNamespace::JamesConcrete j2;
    j2.getName();
    j2.getSpace();
    j2.myOwn();

    DummyInterface:: James * j3=new JamesConcrete();
    cout<<"Dummy Interface Type Pointer Object\n";
    j3->getName();
    j3->getSpace();





    cin.get();    
}
