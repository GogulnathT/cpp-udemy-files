#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    public: //by default members of the class are private, so to make them accessible in the program, we are using public:
   
   //attributes or instances
    string name;
    int health;
    int xp;
    
    //methods
    void talk(string text_to_output)
    {
        cout<<name<<" says "<<text_to_output<<endl; //here the method is being defined, this is a simple way; slightly similar to func defs
    }
    bool is_dead(); 
    
};

class Account
{
    public:
    
    //attributes
    string name;
    double balance;
    
    //methods
    bool deposit(double bal)
    {
        balance += bal;
        cout<<"Depositing "<<bal<<endl;
        cout<<"Current balance : "<<balance<<endl;
    }
    bool withdraw(double bal)
    {
        balance -= bal;
        cout<<"Withdrawing "<<bal<<endl;
        cout<<"Current balance : "<<balance<<endl;
    }
};

int main()
{
    Account gogul_acc;
    gogul_acc.name = "Gogul";
    gogul_acc.balance = 10000;
    gogul_acc.deposit(5000);
    gogul_acc.withdraw(1500.5);
    
    cout<<endl;
    Player gogul; 
    gogul.name = "Tgn";
    gogul.health = 100;
    gogul.xp = 3;
    
    gogul.talk("you are great!");
    
    Player *enemy = new Player;
    (*enemy).name = "Enemy"; //for the ptr obj to access the class members, it must be dereferenced
    (*enemy).health = 100;
    enemy->xp = 9; //using the member of pointer operator 
    cout<<endl;
    enemy ->talk("Our battle will be legendary!");
    return 0;
}