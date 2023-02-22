#include <iostream>

using namespace std;

class Printable_Interface{ //abstract class that we are going to use as an interface;
    friend ostream &operator<<(ostream &os, const Printable_Interface &obj);
public:
    virtual void print (ostream &os) const = 0; //all derived classes must implement this print function;
    //here we are using a pure virtual function print; this class serves as interface for using the '<<' operator for the account hierarchy, the advantage of
    //using a interface is that we dont need to separately overload << operator for all the derived classes and that the printable interface class can be
    //for printing any object;
};

ostream &operator<<(ostream &os, const Printable_Interface &obj){
    obj.print(os); //this is the virtual function that all of the derived classes must implement;
    return os;
}

class Account : public Printable_Interface { //here the account class confirms to the printable_interface class as we are deriving from it and here we can
//implement the virtual print function and in the derived classes(trust, savings etc.) accordingly;
public:
    virtual void print(ostream &os) const override{
        os << "Account Display"<<endl;
    }
    virtual void withdraw(double amount) {
        cout<<"In Account withdraw"<<endl;
    }
    virtual ~Account(){ } 
};

class Checkings : public Account{
public:
  virtual void print(ostream &os) const override{
        os << "Checkings Display"<<endl;
    }
    virtual void withdraw(double amount) {  
        cout<<"In Checking withdraw"<<endl;
    }
};

class Savings : public Account{
public:
  virtual void print(ostream &os) const override{
        os << "Savings Display"<<endl;
    }
    void withdraw(double amount) { 
        cout<<"In Savings withdraw"<<endl;
    }
};

class Trust : public Account{
public:
  virtual void print(ostream &os) const override{
        os << "Trust Display"<<endl;
    }
    void withdraw(double amount) { 
        cout<<"In Trust withdraw"<<endl;
    }
};

void print_func(const Printable_Interface &obj){
    cout<<obj; 
}


int main()
{
    Account *ptr = new Account();
    cout<<(*ptr);
    
    Account *ptr1 = new Trust();
    cout<<*ptr1;
    
    Savings save;
    print_func(save);
    
    
    delete ptr;
    delete ptr1;
    return 0;
}