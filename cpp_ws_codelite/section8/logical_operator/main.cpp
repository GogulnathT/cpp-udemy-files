#include <iostream>
using namespace std;
int main()
{
   int num{};
   const int lower{10};
   const int upper{20};
   cout<< boolalpha;
   cout<<"Enter the number to see if within the bounds: ";
   cin>>num;
   
   bool within{false};
   within=(num>lower && num<upper);
   cout<<"the num is between 10 and 20: "<<within<<endl;
   
    //bool outside{false};
    //outside=(num<lower || num>upper);
    cout<<"the num is outside 10 and 20: "<<!within<<endl;
    
    bool on{false};
    on=(num == 10 || num == 20);
    cout<<"the num is on the limits 10 and 20: "<<on<<endl;
    return 0;
}