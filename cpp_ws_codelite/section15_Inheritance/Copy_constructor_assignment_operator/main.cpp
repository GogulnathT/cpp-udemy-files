#include <iostream>
using namespace std;

class Base{
  private:
    int value;
    
public:
    Base() : value{0} {cout<<"Base no-args constructor"<<endl;}
    Base(int x) : value{x} {cout<<"Base int overloaded constructor"<<endl;}
    Base(const Base &other) : value{other.value} {cout<<"Base copy constructor"<<endl;}
    Base &operator=(const Base &rhs){
        cout<<"Base overloaded operator="<<endl;
        if(this==&rhs)
            return *this;
        value = rhs.value;
        return *this;
    }
    ~Base() {cout<<"Base destructor"<<endl;}
    
};

class Derived : public Base{
private:
    int double_value;
public:
    Derived() : Base{}, double_value{0} {cout<<"Derived No args constructor "<<endl;}
    Derived(int x) : Base{x}, double_value{x*2} {cout<<"Derived int overloaded constructor "<<endl;}
    
    Derived(const Derived &other) : Base{other}, double_value {other.double_value} {
        cout<<"Derived copy constructor"<<endl;
    }//in this derived copy const., we pass 'other'(derived) into the base(derived "is-a" base) copy constructor where slicing will take place

    Derived &operator=(const Derived &rhs) {
        cout<<"Derived assignment operator="<<endl;
        if(this == &rhs)
            return *this;
        Base::operator=(rhs);  //here we are passing rhs(derived) into the overload =operator of the base class(slicing) to assign it; this step is vv imp
        double_value = rhs.double_value;
        return *this;
    }
    ~Derived() {cout<<"Derived Destructor"<<endl;}
    
};

int main()
{
    cout<<"Base objects-----------------------------"<<endl;
    Base b{102};    //overoaded constructor
    Base b1{b};        //copy constructor
    b = b1;             //copy assignment
    cout<<"-------------------------------------------\n"<<endl;
    
    cout<<"Derived objects--------------------------"<<endl;
    Derived d{46};
    Derived d1{d};
    d = d1;
    cout<<"-------------------------------------------\n"<<endl;
    
    return 0;
    }
