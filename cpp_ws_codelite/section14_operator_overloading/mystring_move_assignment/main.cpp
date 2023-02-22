#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    Mystring a{"Hello"};  //overloaded constructor
    a = Mystring{"Hola"};       //overloaded constructor then move assignment
    a = "Vanakam";              //overloaded constructor then move assignment
    
    return 0;
}