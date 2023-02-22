#include <iostream>
using namespace std;

long long fibo(long long n);

int main()
{
    long long num{};
    cout<<"Enter the number for fibonacci series: ";
    cin>>num;
    cout<<fibo(num)<<endl;
}

long long fibo(long long n)
{
    if(n<=1)
        return 1;
    return fibo(n-1) + fibo(n-2);
}