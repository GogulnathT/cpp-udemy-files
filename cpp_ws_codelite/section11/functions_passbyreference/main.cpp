#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector<string> &v1);
void print_vector(const vector<string> &v); //here const is used so that value of vector element cannot be changed as it is a print function

int main()
{
    int num{10};
    cout<<"The value of num is "<<num<<endl;
    pass_by_ref1(num);
    cout<<"The value of num after pass by ref "<<num<<endl;
    
    string super {"Homelander"};
    cout<<"The string super is "<<super<<endl;
    pass_by_ref2(super);
    cout<<"The string super after passing is "<<super<<endl;
    
    vector<string> boys {"Hughie", "Starlight", "Deep"};
    cout<<"The vector boys before passing:"<<endl;
    print_vector(boys);
    cout<<"Passing boys into function :"<<endl;
     pass_by_ref3(boys);
    cout<<"The vector boys after passing by reference : "<<endl;
    print_vector(boys);
    return 0;
}
//since we are performing pass by reference the value of the arguments passed will be changed if it is changed in the function
//except in the print function since it is defined using const
//pass by reference saves storage esp in the case of vectors 
void pass_by_ref1(int &num) 
{
    num = 1000;
}

void pass_by_ref2(string &s)
{
    s = "Billy Butcher";
}

void pass_by_ref3(vector<string> &v1)
{
  v1 = {"Stromfront", "Frenchie", "Black Noir"};
  print_vector(v1);     
}

void print_vector(const vector<string> &v)
{
    for(string i : v)
        cout<<i<<" ";
    cout<<endl;
}