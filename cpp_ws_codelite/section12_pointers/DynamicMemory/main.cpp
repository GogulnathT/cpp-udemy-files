#include <iostream>
using namespace std;
int main()
{
    int *int_ptr{nullptr};
    int_ptr = new int;  //dynamically allocating memory for an integer in the heap using new 
    //now the int_ptr points to the newly allocated integer location
    
    cout<<int_ptr<<endl;     //address of the allocated storage
    cout<<*int_ptr<<endl;   //displays garbage as we have not initialised the integer
    
    //the only way to access the integer is through the pointer, so if the pointer is lost, the integer is also lost(memory leak)
    
    delete int_ptr;   //deallocating the memory to make it available 
    
    double *ptr{nullptr};
    size_t size{};
    cout<<"Enter the no, of doubles: ";
    cin>>size;
    
    ptr = new double[size];     //here a continuous block of storage is allocated in the heap for the array 
    
    cout<<ptr<<endl;       //this ptr will contain the address of the first element in the array which was dynamically allocated
    
    delete [] ptr;  //deallocating the array space on the heap
    return 0;
}