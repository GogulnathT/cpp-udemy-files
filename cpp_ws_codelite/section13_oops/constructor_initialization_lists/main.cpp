#include <iostream>
#include <string>


using namespace std;

class Player
{
    private: 
   //attributes or instances
    string name;
    int health;
    int xp;
    
    public:
    //methods
    void set_name(string n){ name = n;}
    //overloaded constructors
    Player();
    Player(string n);
    Player(string n, int h, int x);
    //destructor
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;}
    
    };
    
    Player::Player() : name{"none"},health{0},xp{0}{ //this is constuctor initialization list, this is true initialization of an object when it is created
//        name = "nil";
//        health = 0;     //this is not needed as we have initialised it above, this block can be empty
//        xp = 0;
    }
    
    Player :: Player(string n) : name{n}, health{0}, xp{0} {
        
    }
    
    Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x} {
    }
    
    
    int main()
    {
        Player empty;
        Player Gogul{"Tgn"};
        Player villain{"Evil",100,99};
        
        return 0;
    }
