#include <iostream>
#include <cmath>  //contains many math functions
using namespace std;
int main()
{
    float num1{};
    cout<<"Enter a number : ";
    cin>> num1;
    cout<<"The square root of the number is "<<sqrt(num1)<<endl;
    cout<<"The cube root of the number is "<<cbrt(num1)<<endl;
    cout<<"The sine and the cosine of the number are "<<sin(num1)<<" and "<<cos(num1)<<endl;
    cout<<"The ceil, trunc and floor of the number are: "<<ceil(num1)<<" "<<trunc(num1)<<" and "<<floor(num1)<<endl;
    cout<<"Enter the power to be raised: ";
    int power{};
    cin>>power;
    cout<<"The value after raising it to the power is "<<pow(num1,power)<<endl;
    
    return 0;
}