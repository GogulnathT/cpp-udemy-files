#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long n); //here unsigned long long is used as the factorial can generate very long numbers

unsigned long long factorial(unsigned long long n)
{
    if(n == 0)
        return 1;
    return n * factorial(n-1);
}

int main()
{
    cout<<factorial(3)<<endl;
    return 0;
}