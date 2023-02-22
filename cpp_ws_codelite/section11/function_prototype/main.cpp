#include <iostream>
#include <cmath>

using namespace std;
const double pi {3.14159};

/*these are the function parameters which contain the info about the func name, return type 
and function parameter type(parameter name is optional) */
double area(double r); 
void area_circle();
 /*in this function prototype only the parameter types are mentioned, 
 their names are not mentioned which is correct(but not advisable)
  best to include their names too for documentation purpose*/
double volume(double , double );
void volume_of_cylinder();

int main()
{
    area_circle();
    volume_of_cylinder();
    return 0;
}

double area(double r)
{
    return (pi * pow(r,2));
}

void area_circle()
{
    double r{};
    cout<<"Enter the radius for calculating area of a circle : ";
    cin>>r;
    cout<<"Area of the circle with r = "<<r<< " is "<<area(r) <<endl;
}

double volume(double r, double h)
{
    return (pi * pow(r,2) * h); //or the return statement can be -> return (area(r) * height)) ----- since the pi * r^2 is done again
}
void volume_of_cylinder()
{
    double h{}, r{};
    cout<<"Enter the radius and height of the cylinder : ";
    cin>>r>>h;
    cout<<"The volume of the cylinder is "<<volume(r, h)<<endl;
}