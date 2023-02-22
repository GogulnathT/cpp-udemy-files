#include <iostream>
using namespace std;
int main()
{
    enum weekdays{sun=1, mon, tue, wed, thur, fri, sat};
    int j;
    cout<<"Enter the day num of the week: ";
    cin>>j;
    switch (j)
    {
        case sun: cout<<"The day is "<< sun <<endl; break;
        case mon: cout<<"The day is Monday"<<endl; break;
        case tue: cout<<"The day is Tuesday"<<endl; break;
        case wed: cout<<"The day is Wednesday"<<endl; break;
        case thur: cout<<"The day is Thursday"<<endl; break;
        case fri: cout<<"The day is Friday"<<endl; break;
        case sat: cout<<"The day is Saturday"<<endl; break;
        default: cout<<"Entered day is not valid";
    }
    
    
    return 0;
}