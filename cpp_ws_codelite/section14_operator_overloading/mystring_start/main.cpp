#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring empty;
    Mystring Omniman{"Nolan"};
    Mystring Homelander{Omniman};
    
    empty.display();
    Omniman.display();
    Homelander.display();
    return 0;
}