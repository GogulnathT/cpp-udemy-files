#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

double total_cost(double ini_cost, double tax_rate = 0.10 , double shipping = 50);
void name(string title, string prefix = "Mr. ", string suffix= " ");

int main()
{
    cout<<fixed<<setprecision(2);
    double cost{};
    cout<<"Enter the cost : ";
    cin>>cost;
    
    cout<<total_cost(cost)<<endl; //here both the default values are used 
    cout<<total_cost(cost,0.05)<<endl; //here only the shipping default is used
    cout<<total_cost(cost, 0.07,75)<<endl; //both defaults are not used
   // note : default be continuous i.e defaults which are changed the least should be at the last
   cout<<"Enter the name:";
   string s{};
   cin>>s;
   name(s);
   name(s, "Dr. ");
    return 0;
}

double total_cost(double ini_cost, double tax_rate, double shipping){
    return ini_cost += (ini_cost*tax_rate) + shipping;
}

void name(string title, string prefix, string suffix)
{
    cout<<prefix+title+" "+suffix<<endl;
}