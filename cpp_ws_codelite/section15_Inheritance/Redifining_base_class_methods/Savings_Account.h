#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"
//in this the deposit method increments amount to be deposited by amount * int_percentage
//eg a 1000 at 5% will be 1000+50=1050
//withdraw method is same as Account class

class Savings_Account : public Account
{
friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

protected:
    double int_rate;
    
public:
    Savings_Account();
    Savings_Account(double balance, double int_rate);
    void deposit(double amount);
    //withdraw is inherited from Account class
};

#endif //_SAVINGS_ACCOUNT_H_