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
//    cout<<"Move constructor"<<endl;
}

//copy assignment
Mystring &Mystring::operator=(const Mystring &rhs){
//    cout<<"Copy assignment(=)"<<endl;
    if(this == &rhs)        
        return *this;
    delete [] str;                         
    str = new char[strlen(rhs.str) +1];         
    strcpy(str, rhs.str);               
    return *this;                        
}

//move assignment
Mystring &Mystring :: operator=(Mystring &&rhs) {
//    cout<<"Move assignment(=)"<<endl;
    if(this == &rhs)        //checking if self assignment        
        return *this;
        
    delete [] str;          
    str = rhs.str;          
    rhs.str = nullptr;  
    return *this;
}

//destructor
Mystring::~Mystring(){
//    if(str!=nullptr)
//        cout<<"Calling destructor for "<<str<<endl;
//    else
//        cout<<"Calling destructor for nullptr \n";
//    delete [] str;

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


//overloaded insertion operator(<<)
ostream &operator<<(ostream &os, const Mystring &rhs){
    os<<rhs.str;   //since this is a friend function we can directly use rhs.str
    return os;      //we are returning for continous insertion
}

//overloaded extraction operator(>>)
istream &operator>>(istream &is, Mystring &rhs){
    char *buff = new char[1000];  //we are giving buff a big size since it is getting input
    is>>buff;  
    rhs = Mystring{buff};  //depending on the copy or move assignment it will use it; here it will use move assignment
    delete [] buff;
    return is;
}