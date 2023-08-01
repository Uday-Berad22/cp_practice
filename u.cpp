// C++ program to demonstrate static
// member function in a class
#include<iostream>
using namespace std;

class GfG
{
    int b;
public:
    void input(int x){
         b=x;
    }
	void print(){
        cout<<b<<endl;
    }
    inline int add( int a,int b){
        return a+b;
    }
	// static member function
    
	
};

// main function
int main()
{
	// invoking a static member function
	// GfG::printMsg();
    GfG *obj_ptr;
    GfG *uday;
    obj_ptr  =new GfG();
    obj_ptr->input(10);
    uday=obj_ptr;
    obj_ptr  =new GfG();
    obj_ptr->input(50);
    delete obj_ptr;
    // cout<<(obj.add(5,4))<<endl;
    obj_ptr->print();
    uday->print();
}
