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
    void get_details() {
    cout << name<<"\t"<<health<<"\t"<<xp<<endl;
    }
    
    Player(string n = "none", int h = 0, int x = 0); //constructor with default parameters 
    
    
    };
    

    Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x} {
        //cout<<"3 args constructor"<<endl;
    }
    
    
    int main()
    {
        Player empty;
         empty.get_details();
         
        Player Gogul{"Tgn"};
        Gogul.get_details();
        
        Player villain{"Evil",100,99};
        villain.get_details();
        
        Player hero{"hero",100};
        hero.get_details();
        
        //since a single constructor with default values is used, we can any no. of arguments(but not more than what is there) while creating object
        //we dont need to explicitly create diff constructors which accept diff arguments
        return 0;
    }
