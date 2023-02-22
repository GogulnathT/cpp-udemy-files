#include <iostream>
using namespace std;
int main()
{
    int num{}, rand{};
    const int target{15};
    
    cout<<"Enter the number: ";
    cin>>num;
    if(num>=target)
        cout<<"The given number is greater than the target "<<target;
    else
        cout<<"The given number is lesser than the target "<<target;
    rand = num;
    cout<< rand;
    return 0;
}