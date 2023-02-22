#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_val1(int num);
void pass_by_val2(string s);
void pass_by_val3(vector<string> v1);
void print_vector(vector<string> v);

int main()
{
    int num{10};
    cout<<"The value of num is "<<num<<endl;
    pass_by_val1(num);
    cout<<"The value of num after pass by value "<<num<<endl;
    
    string super {"Homelander"};
    cout<<"The string super is "<<super<<endl;
    pass_by_val2(super);
    cout<<"The string super after passing is "<<super<<endl;
    
    vector<string> boys {"Hughie", "Starlight", "Deep"};
    cout<<"The vector boys before passing:"<<endl;
    print_vector(boys);
    cout<<"Passing boys into function and modifying it's copy:"<<endl;
     pass_by_val3(boys);
    cout<<"The vector boys after passing: "<<endl;
    print_vector(boys);
    return 0;
}

void pass_by_val1(int num) //the num used here is a copy of the num from main, changing the value here does not change the value in main
{
    num = 1000;
}

void pass_by_val2(string s)//here s initially copies the value of super i.e "Homelander" and then is changed but it is local to this func as it is a COPY
{
    s = "Billy Butcher";
}

void pass_by_val3(vector<string> v1)
{
  v1 = {"Stromfront", "Frenchie", "Black Noir"};
  print_vector(v1);     
}

void print_vector(vector<string> v)
{
    for(string i : v)
        cout<<i<<" ";
    cout<<endl;
}