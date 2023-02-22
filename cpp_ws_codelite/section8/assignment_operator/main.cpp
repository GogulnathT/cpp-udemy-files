#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout<<"Number 1 is "<< num1<<endl;
    num1=10;
    cout<<"Number 1 after assigning is "<<num1<<endl;
    cout<<"Number 2 is "<<num2<< endl;
    num2=20;
    cout<<"Number 2 after assigning is "<<num2<<endl;
    num2=num1;
    cout<<"Number 2 after assigning is "<<num2<<endl;
    num1=num2=2000;
    cout<<"Number 1 after assigning is "<<num1<<endl;
    cout<<"Number 2 after assigning is "<<num2<<endl;
    cout<<&num1<<endl<<&num2;
    return 0;
}