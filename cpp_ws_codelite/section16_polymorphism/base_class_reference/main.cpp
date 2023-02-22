#include <iostream>

using namespace std;

class Account{
  public:
    virtual void withdraw(double amount) { 
        cout<<"In Account withdraw"<<endl;
    }
    virtual ~Account(){cout<<"Account destructor"<<endl;} 
};

class Trust : public Account{
  public:
    void withdraw(double amount) { 
        cout<<"In Trust withdraw"<<endl;
    }
    ~Trust(){cout<<"Trust destructor"<<endl;}
};

void do_withdraw(Account &account,double amount){ //here since the account is a reference to the base class it is dynamically bound
    account.withdraw(amount);
}


int main(){
    
    Account a;
    Account &ref = a;
    ref.withdraw(1000);   //account withdraw
    
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);  //trust withdraw
    
    do_withdraw(a,2000);
    do_withdraw(t,2000);
    
    
    
    
    
    return 0;
}