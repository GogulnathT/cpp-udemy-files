#include <iostream>
using namespace std;
int main()
{
    int a{}, b{};
    cout<<"Enter 2 integers : ";
    cin>>a>>b;
    if(a!=b)
        cout<< ((a>b)? " a is greater" : " b is greater");  
    else
        cout<<"The numbers are the same ";
    return 0;
}