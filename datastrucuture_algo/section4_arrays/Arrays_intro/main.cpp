#include <iostream>
#include <array>
using namespace std;
int main()
{
    char arr[] {'a','b','c','d'};
    array<int, 5> arr1 = {1,2,3,4,5};
    cout<<arr[1];
    cout<<arr1.at(2);
    return 0;
}