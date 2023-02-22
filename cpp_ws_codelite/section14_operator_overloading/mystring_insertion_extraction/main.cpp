#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
    Mystring boys1{"Homelander"};
    Mystring boys2{"Starlight"};
    Mystring boys3;
    
    cout<<"Enter the third boys character name: ";
    cin>>boys3;
    
    cout<<"The boys characters name are: "<<boys1<<", "<<boys2<<" and "<<boys3<<endl;
    
    cout<<"Enter the three boys character names: ";
    cin>>boys1>>boys2>>boys3;
    
    cout<<"The boys characters name are: "<<boys1<<", "<<boys2<<" and "<<boys3<<endl;
    
    
    return 0;
}