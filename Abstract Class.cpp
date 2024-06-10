#include<iostream>
using namespace std;

// An abstract class has atleast on pure virtual function 
// they may have non virtual functions too
class AbstractBase{
	private:
		int val;
		int *ptr;
	public:
		AbstractBase()
		{
			
		}
		AbstractBase (int val,int *p) {
			this->val=val;
			this->ptr=p;
		}
		virtual void James()=0;
		
};

void AbstractBase:: James(){
	cout<<"Now James(Pure Virtual has a definition)\n";
}
class ConcreteDerived: public AbstractBase{
	public:
		ConcreteDerived()
		{
			AbstractBase::James();
		}
		void James() override
		{
			//AbstractBase::James();
			cout<<"Override James in Concrete Derived\n";
		}
};
int main()
{
	// I wont be able to instantiate AbstractBase
	//AbstractBase AB;
	/*
		Abstract Class.cpp:25:15: error: cannot declare variable 'AB' to be of abstract type 'AbstractBase'
		  AbstractBase AB;
		               ^
		
		Abstract Class.cpp:6:7: note:   because the following virtual functions are pure within 'AbstractBase':
		 class AbstractBase{
		       ^
		Abstract Class.cpp:19:16: note: 	virtual void AbstractBase::James()
		   virtual void James()=0;
	*/
	
	// If I give a body / Definition to James the pure virtual function , I will be able to instantiate it
//	AbstractBase AB;
// Sike , This will still give an error , Because Abstract Base is still an Abstract Class
	AbstractBase *d=new ConcreteDerived();
	
	d->James(); // This will give "Override James in Concrete Derived\n"
	
	// Now what if d has AbstractBase Pointer 
	//	d=new AbstractBase();
	//	d->James();
	// Still I cant initialize because AbstractBase is Abstract
	ConcreteDerived cd;
	cd.James();
	// You can call the pure virutal function of AbstractBase from Derived
	

}
