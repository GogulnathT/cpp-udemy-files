#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main()
{
    Account gogul;
    gogul.set_name("Gogul");
    cout<< gogul.get_name()<<endl;
    gogul.set_balance(25000);
    
    if(gogul.deposit(2000))
        cout<<"Amount deposited"<<endl;
    else
        cout<<"Amount not deposited"<<endl;
        
    if(gogul.withdraw(20000))
        cout<<"Amount withdrawn \n Balance is : "<<gogul.get_balance() <<endl;
    else
        cout<<"Insufficient balance \n Balance is : "<<gogul.get_balance() <<endl;
        
     if(gogul.withdraw(200000))
        cout<<"Amount withdrawn \n Balance is : "<<gogul.get_balance() <<endl;
    else
        cout<<"Insufficient balance \n Balance is : "<<gogul.get_balance() <<endl;
    return 0;
}