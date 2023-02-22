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

//overloaded equality operator
bool Mystring::operator==(const Mystring &rhs) const {
    return (strcmp(str,rhs.str) == 0);  //here we are using the strcmp function to compare the two strings of the object and return true or false
}

//to lowercase operator i.e the '-' operator(unary)
Mystring Mystring :: operator-() const{
    char *buff = new char[strlen(str) +1];  //creating new char array buff on the heap
    strcpy(buff,str);
    for(size_t i {0}; i<strlen(buff); i++)
        buff[i] = tolower(buff[i]);             //converting it into lower case 
    Mystring temp{buff};                // creating new oject and initialising it to buff
    delete[] buff;
    return temp;                                //returning the new object which has the lower case
}

//concatenate method i.e binary overloaded + operator
Mystring Mystring::operator+(const Mystring &rhs) const{
    char *buff = new char[strlen(str) + strlen(rhs.str) + 1];
    strcpy(buff,str);
    strcat(buff,rhs.str);
    Mystring temp{buff};
    delete [] buff;
    return temp;
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