#include "Player.h"
using namespace std;

int Player::num_players {0}; //initialising the static variable of the class, this should be done only once(in most cases)

Player::Player(string name_val, int health_val, int xp_val) : name{name_val}, health{health_val}, xp{xp_val} {
    num_players++; //since objs are created in the constructor the count variable is being incremented here(this is the only constructor in use so 
                                // incrementing is enough, but if we have multiple constructors we have to increment respt.
}

Player::Player(const Player &source) : Player{source.name, source.health, source.xp} {    
}

Player::~Player(){
    num_players--; //count is decremented as the objects are destroyed in the destructors 
}

int Player::get_num_players(){
    return num_players; //this is a static method and has access only to static data members of the class
}

