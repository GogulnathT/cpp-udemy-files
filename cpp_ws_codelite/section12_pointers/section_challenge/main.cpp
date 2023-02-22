#include <iostream>

using namespace std;

void print(const int *const array, size_t size)
{
    cout<<"[  ";
    for(size_t i {}; i < size; i++)
        cout<<*(array + i )<<"  ";
    cout<<"]"<<endl;
}
 
int *product(int *arr1, size_t size1, int *arr2, size_t size2)
{
    size_t size3 {size1 * size2};
    int *new_array{nullptr};
    int k = 0;
    new_array = new int[size3];
    for(size_t i{}; i<size1; i++)
    {
        for(size_t j{}; j<size2; j++)
        {
            *(new_array + k) = arr1[i] * arr2[j];
            k++;
        }
    }
    return new_array;
}

int main()
{
    int arr1 [] {10,20,30,40,50};
    size_t size1{5};
    
    cout<<"Array 1: "<<endl;  
    print(arr1, size1);
    cout<<"\n-----------------------"<<endl; 
    
    int arr2 [] {1, 2, 3};
    size_t size2 {3};
    
    cout<<"Array 2: "<<endl;
    print(arr2, size2);
    cout<<"\n-----------------------"<<endl;
    
    int *prod_array{nullptr};
    prod_array = product(arr1,size1,arr2,size2);
    
    cout<<"Product array: "<<endl;
    print(prod_array, (size1*size2));
    cout<<"\n-----------------------"<<endl;
    
    delete [] prod_array;  //v.v.imp as it frees the allocated memory on the heap
    cout<<endl;
    
    return 0;
}