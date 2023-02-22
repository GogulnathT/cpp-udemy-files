#include <iostream>
using namespace std;
int main()
{
    int n{};
    cout<<"Enter n for the pattern: ";
    cin>>n;
    int n1{}, n2 {};
    n1 = n;
    n2 = n;
    for(int i{n2}; i>0 ; i--)
    {
        for(int j{n1}; j>0 ; j--)
        {
            for(int k{n2}; k>0 ; k--)
            {
                cout<<n1<<" ";
            }
            n1--;
        }
        cout<<"$";
        n2--;
        n1=n;
        
    }
    return 0;
}