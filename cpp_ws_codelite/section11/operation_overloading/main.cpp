#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(int);
void print(double);
void print(string);
void print(vector<string>);

void print(int a)
{
    cout<<"Printing int : "<<a<<endl;
}

void print(double a)
{
    cout<<"Printing double: "<<a<<endl;
}
void print(string a)
{
    cout<<"Printing string : "<<a<<endl;
}
void print(vector <string> pass)
{
    cout<<"Printing the vectors: "<<endl;
    for(string i : pass)
        cout<<i<<" ";
    cout<<endl;
}
int main()
{
    print(100); //int is passed
    print('G'); //char is passed, since all characters are promoted to int the ASCII value of the letter will be printed
    
    print(54.532); //double
    print(2.34F); //here float is passed, it will be converted to double
    
    print("This is a c-style string"); //c style string passed is converted to cpp styled string 
    string s {"Cpp style string"};
    print(s); //cpp style string 
    
    vector <string> boys{"Hughie", "Starlight", "Butcher"};
    print(boys);
    return 0;
}