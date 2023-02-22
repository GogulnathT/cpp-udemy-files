#include <iostream>
#include <math.h>

using namespace std;

int main()
{
//    for(int i{2}; i<100; i++)
//    {
//        int j1{}, j2{}, sum{};
//        if(i/10 == 0)
//            cout<<i<<" ";
//        else
//        {
//            j1 = i%10;
//            j2 = i/10;
//            sum = pow(j1,1) + pow(j2,2);
//            if(sum == i)
//                cout<<i<<" ";
//        }
//        }
            int i{89}, j1{}, j2{};
            int sum{};
            j1 = i%10;
            j2 = i/10;
            cout<<j1<<endl<<j2<<endl<<pow(j1,1)<<endl<<pow(j2,2);
            sum = pow(j1,1) + pow(j2,2);
           cout<<sum;
    
    return 0;
}