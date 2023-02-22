#include <iostream>
using namespace std;
int main()
{
    int num1{}, num2{};
    cout<< boolalpha;
    const int lower{10};
    const int upper{30};
    cout<< "enter a number 1 : ";
    cin>> num1;
    cout<<num1<<">"<< lower << (num1>lower) <<endl;
    cout<< "enter a number 2 : ";
    cin>> num2;
    cout<<num2<<"<="<< upper << (num2<=upper) <<endl;
    cout<< (45 == 45);
    return 0;
}