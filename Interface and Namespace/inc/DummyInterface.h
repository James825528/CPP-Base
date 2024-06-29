#pragma once
#include<iostream>
using namespace std;
namespace DummyInterface
{
    // its an interface
    class James{
        public:
        virtual void getName()=0;
        virtual void getSpace()=0;
    };
}