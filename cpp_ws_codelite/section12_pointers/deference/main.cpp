#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int score{200};
    int *score_ptr{&score};
    
    cout<<*score_ptr<<endl; //deferencing a pointer will print the value to which it is pointing
    *score_ptr = 100; //if the pointer is deferenced on the left side of assignment it will change the value in the original location
    cout<<*score_ptr<<endl;
    cout<<score<<endl;
    
    cout<<endl;
    
    double high{45.36};
    double low{21.68};
    double *temp_ptr{&high};
    
    cout<<*temp_ptr<<endl; 
    temp_ptr = &low;  //now the pointer stores the address of low
    cout<<*temp_ptr<<endl; //since it stores the address of low, when it is derefenced it will give the value of low(whose address it is now storing)
    
    cout<<endl;
    
    string name {"Gogul"};
    string *str_ptr {&name};
    
    cout<<*str_ptr<<endl;
    name = "Tgn";
    cout<<*str_ptr<<endl;
    
    cout<<endl;
    
    vector<string> titles {"Antman", "Ironman", "Dr Strange"};
    vector<string> *title_ptr{nullptr};
    title_ptr = &titles; //here when the ptr is initialised to the location of the vector it points to the starting location of the vector
    cout<<&titles<<"\t"<<title_ptr<<endl;
    cout<<"First title in the titles vector: "<< (*title_ptr).at(0)<<endl; //since the pointer points to titles, dereferencing it will give the first value
    //simply put ==> *title_ptr is the same as using titles 
    cout<<"All the elements in titles: "<<endl;
    for(auto heros : *title_ptr) //here deferencing of the pointer is used to run through the loop to print each value of the vector 
        cout<<heros<<endl;
    return 0;
}