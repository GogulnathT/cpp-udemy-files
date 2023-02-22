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
    void get_details() {
    cout << name<<"\t"<<health<<"\t"<<xp<<endl;
    }
    Player();
    Player(string n);
    Player(string n, int h, int x);
    //destructor
    ~Player(){
//        cout<<"Destructor called for "<<name<<endl;
    }
    
    };
    
    Player::Player() : Player {"no name", 0, 0} { 
        cout<<"no-args constructor"<<endl;
    }
    
    Player :: Player(string n) : Player {n, 0, 0} {
        cout<<"string args constructor"<<endl;
    }
    
    Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x} {
        cout<<"3 args constructor"<<endl;
    }
    
    
    int main()
    {
        Player empty;
         empty.get_details();
         
        Player Gogul{"Tgn"};
        Gogul.get_details();
        
        Player villain{"Evil",100,99};
        villain.get_details();
        
        return 0;
    }
