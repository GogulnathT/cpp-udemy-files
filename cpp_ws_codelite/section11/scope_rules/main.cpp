#include <iostream>
using namespace std;

int num{300}; //global variable as it is declared outside any fuction or class

void global_example()
{
    cout<<"Value of num(global) is : "<<num<<endl; //here this num is global since there is no other num within the function block
    num += 100; //change is done to the global variable
    cout<<"Value of num(global) is : "<<num<<endl; 
}

void static_example()
{
    static int num{5000}; //here since static is used it will be retained even after the function ends and the next time the function is called it will retain
    //and use previous value so it wont be initialised again but the scope of this variable is within this function i.e static local variable 
    
    cout<<"Local static num is : "<<num<<endl;
    num += 330;
    cout<<"Local static num is: "<<num <<endl;
}

int main()
{
    int num{100};
    int num1{2};
    //both local to main
    
    cout<<"Local num in main: "<<num<<endl;
    {
        int num{200}; //this num is local to within this block and different from previous num 
        cout<<"Local num in inner block is : "<<num<<endl; //when num is declared it first checks within this block and then to outer blocks
        cout<<"Local num1(present in outer block) is: "<<num1<<endl; //inner blocks can 'see' variables from outer blocks but the vice versa is not possible
    }
    cout<<"Local num in main: "<<num<<endl;  //this num cant see/use the num in the inner block 
    
    global_example();
    global_example();
    
    static_example();
    static_example();
    return 0;
}