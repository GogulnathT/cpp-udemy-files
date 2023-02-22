#include <iostream>
using namespace std;
int main()
{
    int n{}, i{}, j{}, n_dupe{0};
    cout<<"Enter the number: ";
    cin>>n;
    n_dupe = n;
    for(i=0; i++; i<n)
    {
        cout<<n;
        n--;
    }
    cout<<n;
    return 0;
}