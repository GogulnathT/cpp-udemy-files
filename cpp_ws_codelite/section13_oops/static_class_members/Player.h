#ifndef _PLAYER_H_
#define _PLAYER_H_
#include <string>
using namespace std;

class Player{
private:
        static int num_players; //static variable that belongs to the class and the objects, we cant initialise it hear as it will cause error, it will be done in player.cpp
        string name;                
        int health;
        int xp;
    
public:
    string get_name() {return name;}
    int get_health() {return health;}
    int get_xp() {return xp;}
    Player(string name_val = "None", int health_val = 0, int xp_val = 0);
    //copy instructor
    Player(const Player &source);
    //destructor
    ~Player();
    
    static int get_num_players(); //static method, it has access to only static members of the class(here num_players) 


};


#endif //_PLAYER_H_