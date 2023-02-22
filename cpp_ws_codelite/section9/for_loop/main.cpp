#include <iostream>
using namespace std;
int main()
{
    int num{}, num_dupe{};
    cout<<"Enter num";
    cin>>num;
    num_dupe = num;
    for(int i{1}; i<=num; i++)
    {
        for(int j{1}; j<=num_dupe; j++)
        {
            cout<< num_dupe<<" ";
        }
        num_dupe--;
        if(num_dupe==0)
            break;
        else
            cout<<"$ ";
    }
    return 0;
}