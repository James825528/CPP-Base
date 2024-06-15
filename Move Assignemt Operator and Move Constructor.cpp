#include<iostream>
using namespace std;

template<typename T>
void log(T t)
{
    cout<<t<<endl;
}


class James{
    public:
    int val;
    int *ptr;
    James()
    {
        ptr=NULL;
        val=-1;
        log("Constructor called");
    }
    James (James && j)
    {
        ptr=j.ptr;
        val=j.val;
        j.ptr=NULL;
        j.val=-2;
        log("Move Constructor Called");
    }
    James& operator=(James&&j)
    {
        ptr=j.ptr;
        val=j.val;
        j.ptr=NULL;
        j.val=-2;
        log("Move Assignment operator called");
        return *this;
        
    }
    James operator+(James& j)
    {
        log("Addition Overloaded Opertor called");
        James temp;
        temp.val=j.val;
        temp.val+=val;
        return temp;
    }
    
};

James func()
{
    return James{};
}

int main(){
    James j;
    j.val=10;
    log("Before:");
    log(j.val);
    James j2=move(j); // j will give up its resources and "move" will transfer its 
    // ownership to j2 MOVE CONSTRUCTOR IS CALLLED
    log("After:");
    log(j.val); // -2
    log(j2.val); //10
    log("----------------");
    j2=func(); // Move Assignment Operator is called
    log(j2.val); // -1
    
    log("-------------------");
    j.val=10; j2.val=20;
    James j3=j+j2;// The Expression Should create a temporary value and the compiler will use move Assignment Operator
    // to transfer the ownership from temp to j3
    log("J3 Val:");
    log(j3.val);
    
    return 0;    
}
