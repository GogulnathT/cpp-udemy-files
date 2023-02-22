#include <iostream>
using namespace std;

int *create_array(size_t size, int ini_value);
void display(const int *const array, size_t size);

int main()
{
    int ini_value{};
    int *my_array{nullptr};
    size_t size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<"Enter the initial value of the array elements: ";
    cin>>ini_value;
    
    cout<<endl;
    
    my_array = create_array(size, ini_value);
    
    cout<<endl;
    
    display(my_array, size);
    
    cout<<endl;
    
    delete [] my_array;
    
    return 0;
}

int *create_array(size_t size, int ini_value)
{
    int *ptr{nullptr};
    ptr = new int[size];
    for(int i {}; i<size; i++)
        ptr[i] = ini_value;
    return ptr;
}

void display(const int *const array, size_t size)
{
    for(size_t i {}; i<size; i++)
        cout<<array[i]<<"\t";
}