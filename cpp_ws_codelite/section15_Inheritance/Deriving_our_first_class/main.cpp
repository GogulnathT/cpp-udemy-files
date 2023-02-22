#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;


int main()
{
    //Using Account class
    cout<<"Account---------------------------------"<<endl;
    Account acc;
    acc.deposit(2000);
    acc.withdraw(200);
    
    Account *p_acc{nullptr};
    p_acc = new Account();
    p_acc->deposit(500);
    (*p_acc).withdraw(200);
    delete p_acc;
    cout<<endl;
    
    //Using Savings account class
    cout<<"Savings Account--------------------------"<<endl;
    Savings_Account sav_acc;
    sav_acc.deposit(5000);
    sav_acc.withdraw(100);
    
    Savings_Account *p_sav_acc = new Savings_Account();
    p_sav_acc->deposit(500);
    (*p_sav_acc).withdraw(10);
    delete p_sav_acc;
    cout<<endl;
    
    return 0;
}