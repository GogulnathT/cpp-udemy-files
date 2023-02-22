#include <iostream>

using namespace std;

class Account{
  public:
    virtual void withdraw(double amount) { //declaring the method as virtual will make the derived class override them based on the usage
        cout<<"In Account withdraw"<<endl;
    }
};

class Checkings : public Account{
  public:
    virtual void withdraw(double amount) {  //here the keyword virtual can be used or not but best practise is to use it
        cout<<"In Checking withdraw"<<endl;
    }
};

class Savings : public Account{
  public:
    void withdraw(double amount) { 
        cout<<"In Savings withdraw"<<endl;
    }
};

class Trust : public Account{
  public:
    void withdraw(double amount) { 
        cout<<"In Trust withdraw"<<endl;
    }
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