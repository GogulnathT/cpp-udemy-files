#include <iostream>
extern int c;
int main()
{
    std::cout<<"linker error"<< std::endl;
    std::cout<<c;
    return 0;
}