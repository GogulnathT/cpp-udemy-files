#include <iostream>
#include <cmath>

float ftoc(float);
float ftok(float);

using namespace std;

int main()
{
    float ftemp{};
    cout<<"Enter the temperature in fahrenheit: ";
    cin>>ftemp;
    cout<<"The temperature in celsius is "<<ftoc(ftemp)<<" C and kelvin is "<<ftok(ftemp)<<" K.";
    return 0;
}

float ftoc(float temp)
{
    return round((temp - 32.0) * (5.0/9.0));
}

float ftok(float temp)
{
    temp = ftoc(temp) + 273.0;
    return round(temp);
}