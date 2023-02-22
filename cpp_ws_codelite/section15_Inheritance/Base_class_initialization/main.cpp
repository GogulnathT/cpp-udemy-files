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
private:
    int double_value;
public:
    Derived() : Base{}, double_value{0} {cout<<"Derived No args constructor "<<endl;} //here the Base construtor is explicitly called; otherwise it will be called by the compiler automatically
    Derived(int x) : Base{x}, double_value{x*2} {cout<<"Derived int overloaded constructor "<<endl;} //here the int args base constructor is explicitly called
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
    Derived d1{1000}; 
    
    return 0;
    }
