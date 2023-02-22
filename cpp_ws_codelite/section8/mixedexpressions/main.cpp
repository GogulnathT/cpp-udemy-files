#include <iostream>
using namespace std;
int main()
{
    int a {}, b {}, c {};
    int total {};
    const int count {3};
    cout<< "Enter three numbers :";
    cin>> a >> b >> c;
    total = a + b + c;
    cout<< "The total is : "<<total<<endl;
    double avg {0.0};
    avg = static_cast<double> (total)/count;
    cout<<"The avg is : "<< avg << endl;
    cout<< 5/8;
    return 0;
}