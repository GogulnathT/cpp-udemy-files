#include <iostream>
using namespace std;
int main()
{
    bool equal_result{false};
    bool not_equal_result {true};
    cout<<boolalpha;  // will display true of false instead of 1/0 for booleans
    int num1{}, num2{};
    cin>> num1>> num2;
    equal_result = (num1 == num2);
    not_equal_result = (num1 != num2);
    cout<< "Comparision results(eqaul) = "<< equal_result << endl;
    cout<< "Comparision results(not equal) = "<<not_equal_result<<endl;
    // equallity operators can be used for any data type like char, float etc
    return 0;
}