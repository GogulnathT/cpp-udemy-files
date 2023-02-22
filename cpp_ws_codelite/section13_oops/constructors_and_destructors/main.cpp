#include <iostream>
#include <string>
#include <vector>

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
    Player(){
        cout<<"no args constructor"<<endl;}
    Player(string name){
        cout<<"name arg constructor"<<endl;}
    Player(string name, int health, int xp){
        cout<<"three arg constructor"<<endl;
    }
    //destructor
    ~Player(){
        cout<<"Destructor called for "<<name<<endl;}
    
    };
    
    int main()
    {
        {//we are creating blocks to see that the destructor destroys the object when out of scope
            Player slayer;
            slayer.set_name("Slayer");
        }
        {
            Player gogul;
            gogul.set_name("Tgn");
            Player enk("Nithis");
            enk.set_name("Nithis");
            Player pavi("Ptron",100,45);
            pavi.set_name("ptron");
        }
        
        Player *enemy = new Player;
        enemy->set_name("enemy");
        
        delete enemy;
        
        Player *boss = new Player("Boss",101,89);
        (*boss).set_name("Boss");
        
        delete boss;
        
        return 0;
    }
