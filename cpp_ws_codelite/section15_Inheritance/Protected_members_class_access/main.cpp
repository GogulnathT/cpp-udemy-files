#include <iostream>

using namespace std;

class Base{
    //Friends of the base class have access to private, protected and public
public:
    int a{0};
    void display() {
        cout<<a<<","<<b<<" and "<<c<<endl;
    }
protected:
    int b{0};
private:
    int c{0};
};


class Derived : public Base {
  //friends of derived class has access only to what derived has access to
  //a will be public
 //b will be protected
 //c will be inaccessible
public:
    void access_base_members(){
        a = 1005;    //ok
        b = 200;   //ok since it is protected in original so here also it will be protected 
        //c = 300 is error since c is not accessible
    }
};

int main()
{
    cout<<"\n----------Base member access from base objects----------------"<<endl;
    Base base;
    base.a = 100;
    //base.b and base.c cannot be accessed as they are private and protected
    base.display();
    
    cout<<"\n----------Base member access from derived objects-------------"<<endl;
    Derived d;
    d.a = 1002;
    //d.b is protected and d.c is not accessible 
    d.access_base_members();
    d.display(); //this is a method of the base class but since it is in public it can be accessed by the derived class 
    
    
    return 0;
}