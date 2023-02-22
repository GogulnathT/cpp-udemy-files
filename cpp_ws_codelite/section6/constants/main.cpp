/*
    Program to understand constants using simple problem
    room cleaning service
    charge per room = cost_per_room rupees
    tax = 6%
    total estimate= cost + tax
*/
#include <iostream>
using namespace std;
int main()
{
    int rooms_small, rooms_large;
    const float cost_per_small_room{25}, cost_per_large_room{35}; 
    const float tax{0.06}; //tax rate
    cout<<"How many small rooms would you like to be cleaned?"<<endl;
    cin>>rooms_small;
    cout<<"How many large rooms would you like to be cleaned?"<<endl;
    cin>>rooms_large;
    cout<<"The number of small rooms are "<<rooms_small;
    cout<<"\nThe number of large rooms are "<<rooms_large;
    cout<<"\nPrice per small room: " <<cost_per_small_room<<endl;
    cout<<"Price per large room: " <<cost_per_large_room<<endl;
    cout<<"Cost for small rooms is "<<cost_per_small_room*rooms_small<<endl;
    cout<<"Cost for large rooms is "<<cost_per_large_room*rooms_large<<endl;
    cout<<"Tax is "<<(cost_per_small_room*rooms_small*tax)+(cost_per_small_room*rooms_small*tax)<<endl;
    cout<<"Total estimate is "<<(cost_per_small_room*rooms_small)+(cost_per_large_room*rooms_large)+
    (cost_per_small_room*rooms_small*tax)+(cost_per_small_room*rooms_small*tax)<<endl;
    cout<<"This estimate is valid for "<<30<<" days"<<endl;
    cout<<endl;
    return 0; 
}