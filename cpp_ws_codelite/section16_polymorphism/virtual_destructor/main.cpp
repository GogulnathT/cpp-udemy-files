#include <iostream>

using namespace std;

class Account{
  public:
    virtual void withdraw(double amount) { 
        cout<<"In Account withdraw"<<endl;
    }
    virtual ~Account(){cout<<"Account destructor"<<endl;} //here we are using the virtual destructor so that the obj are destroyed correctly; using
    //virtual here is enough, all the destructors in the derived class becomes virtual;
};

class Checkings : public Account{
  public:
    virtual void withdraw(double amount) { 
        cout<<"In Checking withdraw"<<endl;
    }
    virtual ~Checkings(){cout<<"Checkings destructor"<<endl;}//we dont need virtual here but it is best practice
};

class Savings : public Account{
  public:
    void withdraw(double amount) { 
        cout<<"In Savings withdraw"<<endl;
    }
    ~Savings(){cout<<"Savings destructor"<<endl;}
};

class Trust : public Account{
  public:
    void withdraw(double amount) { 
        cout<<"In Trust withdraw"<<endl;
    }
    ~Trust(){cout<<"Trust destructor"<<endl;}
};

int main()
{
    cout<<"----Pointers-----"<<endl;
    Account *p1 = new Account();
    Account *p2 = new Checkings();
    Account *p3 = new Savings();
    Account *p4 = new Trust();
    
    (*p1).withdraw(1000);
    (*p2).withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    cout<<"\n----Clean up--"<<endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    
    
    
    return 0;
}