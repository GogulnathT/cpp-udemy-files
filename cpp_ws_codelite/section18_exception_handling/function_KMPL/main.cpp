#include <iostream>

using namespace std;

double calculate_KMPL(int km, int litre)
{
    if(litre <= 0)
        throw 0;
    return (double)km/litre;
}

int main()
{
    int km{}, litre{};
    double kmpl{};
    
    cout<<"Enter the Km and litres:";
    cin>>km>>litre;
    
    try{
        kmpl = calculate_KMPL(km, litre);
        cout<<"Result KMPL: "<<kmpl<<endl;
    }
    
    catch(int &ex){
        cerr<<"Cannot be divided by zero or negative litre"<<endl;
    }
    return 0;
}