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
    void get_details() const { //putting const here is guarantee that this method wont change the objects, now we can use this method for const objects
    cout <<name<<"\n"<<health<<"\n"<<xp<<endl;
    }
    
    Player(string n = "none", int h = 0, int x = 0); //constructor with default parameters 
    
    
    };
    

    Player::Player(string n, int h, int x) : name{n}, health{h}, xp{x} {
        //cout<<"3 args constructor"<<endl;
    }
    
    void display_details (const Player &p) //as far as p is concerned it is const so only const methods can be used on it 
    {
        p.get_details();
        cout<<endl;
    }
    
    int main(){
        const Player villain{"villain",100, 45};
        Player hero{"hero",100,23};
        display_details(hero);
        villain.get_details();
        cout<<endl;
        
        return 0;
    }