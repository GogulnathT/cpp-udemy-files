#include <iostream>
#include <vector>
#include <string>

using namespace std;

void display(const vector<string> *v)
{
    for(auto str : *v)
        cout<<str<<"\t";
}

void display(const int *array, int sentinal)
{
    while(*array != sentinal)
        cout<<*array++<<"\t"; //here both the * and ++ operator are used, as per the precedence first the * and then ++ are executed respt
    
}

int main()
{
    vector<string> boys {"Hughie", "Butcher", "Starlight"};
    display(&boys); //the address of the vector is passed into the fucntion as pointer
    
    cout<<endl;
    
    int arr [] {12, 44, 4, 10, 36, -1};
    display(arr, arr[5]); //passing the array value(address) and the sentinal into the function
    
    cout<<endl;
    return 0;
}