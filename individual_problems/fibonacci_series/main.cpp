#include <iostream>
using namespace std;

void fibonacci(int n);

int main()
{
    int num{};
    cout<<"Enter number for fibonacci series : ";
    cin>>num;
    fibonacci(num-2);
    
    return 0;
}

void fibonacci(int n)
{
    int n1{0}, n2{1};
    cout<<n1<<" "<<n2<<" ";
    for(int i{}; i<n; i++)
    {
        cout<<(n1+n2)<<" ";
        int temp{n1};
        n1 = n2;
        n2 = temp + n2;
    }
}