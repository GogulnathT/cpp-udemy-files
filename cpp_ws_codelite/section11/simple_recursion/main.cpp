#include <iostream>
using namespace std;
int evenadd(int n); 
int main()
{
    cout<<"Enter number to add even numbers from 0 upto that num:";
    int num;
    cin>>num;
   cout<< evenadd(num)<<endl;
    return 0;
}

int evenadd(int n)
{
    if(n%2==0 && n>=0)
    {
      static int total{};
      total+=n;
      if(n==0)
          return total;
    }
    return evenadd(--n);
}