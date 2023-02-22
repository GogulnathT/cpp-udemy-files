#include <iostream>
using namespace std;
int main()
{
    int cents{};
    cout<<"Enter the amount in cents: ";
    cin>>cents;
    int dollars{}, quarters{}, dime{}, nickel{}, pennys{}, temp{};
    
    dollars = cents/100;
    cout<<"Dollars:     "<<dollars<<endl;
    temp = cents%100;
    
    quarters = temp/25;
    cout<<"Quarters:    "<< quarters<<endl;
    temp%=25;
    
    dime= temp/10;
    cout<<"Dimes:       "<<dime<<endl;
    temp%=10;
    
    nickel= temp/5;
    cout<<"Nickels:     "<<nickel<<endl;
    temp%=5;
    
    pennys= temp;
    cout<<"Pennies:     "<<pennys<<endl;
    
    return 0;
}