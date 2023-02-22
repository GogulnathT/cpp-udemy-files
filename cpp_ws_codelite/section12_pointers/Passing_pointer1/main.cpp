#include <iostream>

using namespace std;

void double_data(int *int_ptr) //here the function parameter is defined as a pointer i.e pointer declaration
{
    *int_ptr *= 2; //multiplies the value by 2 i.e doubles
}

int main()
{
    int value{10};
    int *ptr{nullptr};
    cout<<"Value: "<<value<<endl;
    double_data(&value);   //here directly the address of the variable is passed to the function
    cout<<"Value: "<<value<<endl;
    
    cout<<endl;
    
    ptr = &value;
    double_data(ptr); //here the ptr pointing to the variable is passed to the function
    cout<<"Value: "<<value<<endl;
    return 0;
}