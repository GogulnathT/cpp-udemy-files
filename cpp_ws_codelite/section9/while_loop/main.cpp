#include <iostream>
using namespace std;
int main()
{
//    int num {};
//    cout<<"Enter the number: ";
//    cin>>num;
//    while(num > 0)
//    {
//        cout<<num<<endl;
//        num--;
//    }
//    cout<<"Time is up!"<<endl;
    
//    cout<<"Enter a num between 10 and 100: ";
//    int n{};
//    cin>> n ;
//    while(n<=10 || n>=100)
//    {
//        cout<<"Enter a num between 10 and 100: ";
//        cin>>n;
//    }
//     cout<<"Thanks";
//    return 0;

    bool done{false};   //input validation using bool and while loop
    int number{0};
    
    while(!done)
    {
        cout<<"Enter a num between 10 and 100:";
        cin>>number;
        if(number <=10 || number >= 100)
            cout<<"Out of range!"<<endl;
        else
        {
            cout<<"Thanks!, it is a valid number";
            done = true;
        }
    }
}