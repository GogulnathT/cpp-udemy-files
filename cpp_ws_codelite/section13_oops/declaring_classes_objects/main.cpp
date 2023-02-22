#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    //attributes or instances
    string name {"Player"};  //attributes can also be initialised here 
    int health {100};
    int xp;
    
    //methods
    void talk(string);
    bool is_dead(); //this is similar to that of the prototypes of functions
    
};

class Account
{
    //attributes
    string name;
    double balance {0.0};
    
    //methods
    bool deposit();
    bool withdraw();
};

int main()
{
    Player gogul;
    Player enk;  //creating objects, here gogul and enk are objects
    
    Account gogul_account;
    Account enk_account;
    
    Player players[] {gogul, enk};  //array of objects can also be created, objects act like int, doubles etc
    
    vector <Player> players_vec {enk};
    players_vec.push_back(gogul);
    
    Player *enemy{nullptr};  //creating a pointer in class Player
    enemy = new Player; //dynamically allocating memory on the heap
    
    delete enemy;
    return 0;
}