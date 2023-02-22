#include <iostream>

using namespace std;

class Base{
public:
        virtual void say_hello() const{
            cout<<"Hello, I am base class obj"<<endl;
        }
        virtual ~Base(){}
};

class Derived : public Base {
public:
    void say_hello() const override { //using the override specifier here will help us make sure that the overriding takes place and that the func. matches with the base class virtual func.;
            cout<<"Hello, I am derived class obj"<<endl;
    }
    ~Derived(){}
};

int main()
{
    Base *p1 =new Base();
    p1->say_hello();
    
    Derived *p2 = new Derived();
    p2->say_hello();
    
    Base *p3 = new Derived();
    p3->say_hello();
    
    
    delete p1;
    delete p2;
    delete p3;
     
     return 0;
}