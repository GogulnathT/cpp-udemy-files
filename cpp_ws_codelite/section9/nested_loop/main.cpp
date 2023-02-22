#include <iostream>
using namespace std;
int main()
{
    for(int i{1}; i<11; i++)
    {
        for(int j{1}; j<13; j++)
        {
            cout<< i << " * "<<j<<" = "<< i*j<<endl;
        }
        cout<<"--------------------\n";
    }
    return 0;
}