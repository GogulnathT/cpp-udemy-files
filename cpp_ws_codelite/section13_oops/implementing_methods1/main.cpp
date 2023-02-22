#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Account
{
private: 
    //attributes
    string name;
    double balance;
    
public:
    //methods
    //inline methods
    void set_balance(double bal){balance = bal;}
    double get_balance(){return balance;}
    
    //methods declared outside the class
    void set_name(string n);
    string get_name();
    bool deposit(double amount);
    bool withdraw(double amount);
};

void Account :: set_name(string n){
    name = n;
}

string Account::get_name(){
    return name;
}

bool Account :: deposit(double amount){
    //if verified
    balance += amount;
    return true;
}

bool Account::withdraw(double amount){
    if(balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else
        return false;
}
        

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