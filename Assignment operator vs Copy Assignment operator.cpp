#include<iostream>
using namespace std;

template <typename T>
void log(T m_Value)
{
	cout<<m_Value<<endl;
}
class James{
	public:
		int* ptr;
		int var;
		
	James(){
		ptr=NULL;
		log("James Default Constructor Called");
	}
	James& operator=(James& a)
	{
		log("James Custom Copy Assignment operator called");
		
//		log(ptr);
		if (this == &a) return *this;
		if(ptr!=NULL)
		{
//			log("its not null");
			delete ptr;
//			log("freed mem");
//			ptr=NULL;
		}
//		log(ptr);
		ptr=new int(*(a.ptr));
//		return *this;		
		
	}
	
	
};
int main()
{
	James j1,j2;
	int a=5,b=10;
	j1.ptr=new int(5);
	j2.ptr=new int(10);
	James j3;
	j3 = j1 = j2; // default assignment operator caled
//	j1=j2;
	
//	j3=j1;

//	log(j3.ptr);
//	log(j1.ptr);
//	a=12;
//	// if default assignment operator was called then both j3 and j1 would give 12
//	// custom copy assignment operator will give 5 ,12
//	log(*(j3.ptr));
//	log(*(j1.ptr));
//	
//	log(&(j3.ptr));
//	log(&(j1.ptr));
	
}
