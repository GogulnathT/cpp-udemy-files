#include <cstring>
#include <iostream>
#include "Mystring.h"

using namespace std;

//no args constructor
Mystring::Mystring() : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

//overloaded constructor
Mystring::Mystring(const char *s) : str{nullptr}{
    if(s == nullptr){
        str = new char[1];
        *str = '\0';
    }
    else{
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
}

//copy constructor
Mystring::Mystring(const Mystring &source) : str{nullptr} {
    str = new char[strlen(source.str) + 1];
    strcpy(str, source.str);
}

//destructor
Mystring::~Mystring(){
    delete [] str;
}

//display method
void Mystring::display() const {
    cout<<str<<" : "<<get_length()<<endl;
}

//get length method
Mystring::get_length() const{
    return strlen(str);
}

//get string
const char *Mystring:: get_str() const{
    return str;
}