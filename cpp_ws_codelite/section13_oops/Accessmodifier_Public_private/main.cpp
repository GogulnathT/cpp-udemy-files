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
    void talk(string text_to_output)
    {
        cout<<name<<" says "<<text_to_output<<endl; 
    }
    bool is_dead(); 
    
};

int main()
{
    Player gogul;
    // gogul.name = "Ultimate";
    // cout<<gogul.health <<endl;    //these two expressions are wrong as they are trying to access the private member 
    
    gogul.talk("this is public");  //this wont cause error as talk method is public and it can be accessed
    return 0;
}