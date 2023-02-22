#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string s1{"Gogul"};
    cout<<s1.length()<<endl;
    string s2{s1};
    string s3{s1, 0,3}; //Gog
    string s4 (10, 'X'); //XXXXXXXXXX Constructor styled initialization
    cout<<s3<<endl<<s4<<endl;
    
    //comparsion
    cout<<boolalpha;
    cout<< (s1 == s2) <<endl;
    cout<<(s1==s3)<<endl;
    cout<<(s1>s3)<<endl;
    cout<<(s1<s4)<<endl;
    
    //assignment
    s1="Omniman";
    cout<<s1<<endl;    //Omniman
    cout<<s1[0]<<endl; //O
    s1.at(6) = 'm';  //at is a method 
    cout<<s1<<endl; //Omnimam
    
    //concatenation
    string s5{};
    s5 = s1 + " vs" + " Invincible";
    string s6{"Guardians of the Globe"};
    s5 = s1 + " vs " + s6; //a c style string and cpp style string are concatenated  
    cout<<s5<<endl<<s6<<endl;
    
    //looping
    for(size_t i {}; i<s5.length() ; i++)  // range based -> for(char c : s5)
        cout<<s5.at(i)<<endl;
        
    //substring
    cout<<s5.substr(0,10)<<endl;
    
    //erase 
    cout<<s5.erase(0,11)<<endl; //s5.erase(10) -> will erase the char starting from the 10th index
    
    //getline
    cout<<"enter the string:";
    string s7{};
    getline(cin, s7);
    cout<<s7<<endl;
    
    //find
    string s8 = "Omniman Invincible Atomeve Immortal";
    string to_find{};
    cout<<"Enter word to be found: ";
    cin>>to_find;
    size_t position = s8.find(to_find);
    if(position != string::npos) //here string::npos means that the word was not present in the string so we are using !=
        cout<<"Found "<<to_find<<" at position: "<<position<<endl;
    else
        cout<<"Sorry not found"<<endl;
        
    //insert
    cout<<s8.insert(8,"Battlebeast ")<<endl;
    
    //swap
    swap(s8,s7);
    cout<<s8<<endl;
    return 0;
}