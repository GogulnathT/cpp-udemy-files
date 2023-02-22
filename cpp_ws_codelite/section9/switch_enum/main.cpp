#include <iostream>
using namespace std;
int main()
{
    enum directions{left, right, up, down};
    directions aim{right};
    
    switch (aim)
    {
        case left: cout<<"West"; break;
        case
            right: cout<<"East";break;
        case
            up: cout<<"North";break;
        case
            down: cout<<"South"; break;
        default:
            cout<<"Not a valid direction";
    }
    return 0;
}