#include <iostream>
#include <vector>
#include <iomanip> //inp and outp manipulation operator, usually used for setting precision of decimal
using namespace std;
int main()
{
    int scores[] {10, 20, 30};
    for(int score : scores) //instead of int auto can also be used
        cout<<score<<endl;
    
    vector<double> temp {12.3, 78.9, 78.9, 34.33};
    double avg_temp{}, total{};
    for(auto t : temp)   //here vector is used for the sequence along with auto insteasd of giving data type
    {
        total+= t;
    }
    cout<<fixed<<setprecision(2); //this statement is used for rounding the decimals to 2 places
    avg_temp = total/ temp.size();
    cout<<"The average temp is "<<avg_temp<<endl; 
    
    for(int val : {123, 456, 789}) //here initialization is done within the loop i.e explicitly
        cout<<val<<endl;
    
    for(char c : "I am awesome") // a string is used in the place of sequence
        cout<<c<<"\t";
    return 0;
}