#include <iostream>

using namespace std;

void print_array(const int nums[], size_t size);
void set_value(int nums[], size_t size, int val);

int main()
{
    int arr [] {100,34,45,99,32};
    print_array(arr,5);
    int value {23};
    set_value(arr, 5, value);
    print_array(arr,5);
    print_array(arr, 5);
    return 0;
}

void print_array(const int nums[], size_t size)
{
     for(int i{}; i<size; i++)
        cout<<nums[i]<<"\t";
    cout<<endl;
   //  nums[0] = 120120; doing this will cause error since we are initialising it to const
}

void set_value(int nums[], size_t size, int val)
{
    for(int i{}; i < size; i++)
        nums[i] = val;
}