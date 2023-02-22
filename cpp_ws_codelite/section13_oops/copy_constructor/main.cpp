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
    string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    
    Player(string n = "none", int h = 0, int x = 0); //constructor with default parameters 
    
    //copy constructor
    Player(const Player &original);
    
    //destructor
    ~Player () {cout<< "Destructor called for "<<name<<endl; }
    
    };
    

    Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x} {
        //cout<<"3 args constructor"<<endl;
    }
    
    Player :: Player (const Player &original) : name{original.name}, health{original.health}, xp{original.xp} {
        cout<<"Copy constructor for "<<original.name<<endl;
        }
    
    void display_player (Player p)  //pass by value for the copy constructor p
    {
        cout << p.get_name()<<endl;
        cout<< p.get_health()<<endl;
        cout<<p.get_xp()<<endl;
    }
    
    
    int main()
    {
        Player empty{"XXX",100,50};
        
        Player new_obj{empty};
        
        display_player(empty);
        
        
        Player gogul{"Tgn"};
        Player hero{"Hero", 100};
        Player enemy{"Enemy", 100, 5};
        
        return 0;
    }