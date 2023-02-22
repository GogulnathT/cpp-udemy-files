#include <iostream>
using namespace std;
int main()
{
    int num{};
    const int low{10};
    const int up{100};
    
    cout<<"Enter 2 numbers between 10 and 100: ";
    cin>>num;
    
    if(num>=low && num<=up)
    {
        cout<<"The number is within the boundary."<<endl;
        cout<<num<<endl;
        int diff{};
        diff = num - low;
        cout<<"The difference is "<<diff<<endl;
    }
    return 0;
}