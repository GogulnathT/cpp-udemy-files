#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
    private: 
   //attributes or instances
    string name {"Player"};
    int health;
    int xp;
    
    public:
    //methods
    void set_name(string n)
    {
        name = n; 
    }
    string get_name(){return name;} 
    
    Player(){ //no arg constructer being defined, now the cpp wont generate default constructor as we have providided it
        name = "~";
        health = 100;
        xp = 3;
    }
    
    Player (string n, int h, int x) //this is a constructor with arg, this is fine as long as we define a no args constructor, otherwise error will be generated
    {
        name = n;
        health = h;
        xp = x;
    }
    
};

int main()
{
    Player gogul;
    cout<< gogul.get_name()<<endl;
    gogul.set_name("Tgn");
    cout<< gogul.get_name() <<endl;
    Player pavi("Ptron",98,10);
    cout<<pavi.get_name()<<endl;
    return 0;
}