#include <iostream>
using namespace std;

class Base{
  private:
    int value;
    
public:
    Base() : value{0} {cout<<"Base no-args constructor"<<endl;}
    Base(int x) : value{x} {cout<<"Base int overloaded constructor"<<endl;}
    ~Base() {cout<<"Base destructor"<<endl;}
    
};

class Derived : public Base{
    // 'using Base::Base;' doing this will inherit the non spl constructors of the base class
private:
    int double_value;
public:
    Derived() : double_value{0} {cout<<"Derived No args constructor "<<endl;}
    Derived(int x) : double_value{x*2} {cout<<"Derived int overloaded constructor "<<endl;}
    ~Derived() {cout<<"Derived Destructor"<<endl;}
    
};

int main()
{
    {
    cout<<"Base objects: \n";
    Base b;
    Base b1{100};
    }
    cout<<"------------------------\n"<<endl;
    cout<<"Derived objects: "<<endl;
    Derived d;
    Derived d1{1000}; //here the value of double_value(derived) will be initialised to 1000 and not value(base) i.e the int args constructor of the
                                 //derived class will be called
                                 
    
    
    
    
    return 0;
    }
