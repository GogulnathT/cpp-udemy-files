#include <iostream>
#include "Player.h"

using namespace std;

void display_players(){
    cout<<"Active players are : "<<Player::get_num_players()<<endl;
}

int main()
{
    display_players(); 
    
    Player hero("Hero");
    cout<<hero.get_name()<<endl;
    display_players();
    
    {
        Player Gogul{"Tgn"};
        cout<<Gogul.get_name()<<endl;
        display_players();
    }
    display_players();
    
    Player *enemy = new Player{"Enemy", 100, 9};
    cout<<enemy->get_name()<<endl;
    display_players();
    delete enemy;
    display_players();
    
    return 0;
}

