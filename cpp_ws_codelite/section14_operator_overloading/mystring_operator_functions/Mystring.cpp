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

//move constructor
Mystring:: Mystring(Mystring &&source) : str{source.str} {
    source.str = nullptr;
    cout<<"Move constructor"<<endl;
}

//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
    cout<<"Copy assignment(=)"<<endl;
    if(this == &rhs)        
        return *this;
    delete [] str;                         
    str = new char[strlen(rhs.str) +1];         
    strcpy(str, rhs.str);               
    return *this;                        
}

//move assignment
Mystring &Mystring :: operator=(Mystring &&rhs) {
    cout<<"Move assignment(=)"<<endl;
    if(this == &rhs)               
        return *this;
        
    delete [] str;          
    str = rhs.str;          
    rhs.str = nullptr;  
    return *this;
}

//destructor
Mystring::~Mystring(){
    if(str!=nullptr)
        cout<<"Calling destructor for "<<str<<endl;
    else
        cout<<"Calling destructor for nullptr \n";
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

//equality op overloaded function
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    return (strcmp(lhs.str,rhs.str) == 0);
}

//make lowercase i.e tolower '-' unary 
Mystring operator-(const Mystring &obj) {
    char *buff = new char[strlen(obj.str) + 1];
    strcpy(buff,obj.str);  //since we dont have the this ptr, we have mention it using the obj(it has access since it is friend)
    for(size_t i {0}; i<strlen(buff); i++)
        buff[i] = tolower(buff[i]);             
    Mystring temp{buff};                
    delete[] buff;
    return temp;          
}

//concatenation 
Mystring operator+(const Mystring &lhs, const Mystring &rhs){
    char *buff = new char[strlen(lhs.str) + strlen(rhs.str) + 1];
    strcpy(buff,lhs.str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
}