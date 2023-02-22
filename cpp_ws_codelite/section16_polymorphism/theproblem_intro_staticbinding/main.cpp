#include <iostream>

using namespace std;

class Base{
public:
        void say_hello() const{
            cout<<"Hello, I am base class obj"<<endl;
        }
};

class Derived : public Base {
public:
    void say_hello() const{
            cout<<"Hello, I am derived class obj"<<endl;
    }
};

void greetings(const Base &obj){
    cout<<"Greetings ";
    obj.say_hello();
}


int main()
{
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    greetings(b);
    greetings(d);   //here we should be using the hello method of the derived instead the compiler will use the base hello method due to static binding
    //this is because a derived 'is-a' base and in the function definition we defined the reference as base object
    
    Base *ptr = new Derived(); //here the ptr is of type base and it can hold the address of a derived obj since derived 'is-a' base so this is valid;
    
    ptr->say_hello();  //here we want the ptr to use the derived hello method but due to static binding the compiler will use the base hello method
    
    
    return 0;
}