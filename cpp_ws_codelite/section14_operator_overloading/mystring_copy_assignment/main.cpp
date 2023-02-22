#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main(){
    
    Mystring a{"Hello"};
    Mystring b;
    
    b = a;          //copy assignment, this is actually b.operator= (a)
    
    b = "This is a test";  //b.operator=("This is a test"), a temporary obj will be created for "This is a test" through the overloaded constuctor
    
    
    return 0;
}