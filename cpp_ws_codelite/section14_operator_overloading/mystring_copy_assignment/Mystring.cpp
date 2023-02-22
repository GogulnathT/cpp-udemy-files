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

//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    cout<<"Copy assignment(=)"<<endl;
    if(this == &rhs)        //checking if we are assigning the same object to itself eg s1 = s1 and returning it if true
        return *this;
    delete [] str;                         //we are deallocating the str of this(lhs) since we are going to assign it to new obj on the rhs(overwriting)
    str = new char[strlen(rhs.str) +1];         //allocating memory for the lhs obj 
    strcpy(str, rhs.str);               //copying rhs obj into lhs
    return *this;                        //returning the this obj i.e the lhs obj
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