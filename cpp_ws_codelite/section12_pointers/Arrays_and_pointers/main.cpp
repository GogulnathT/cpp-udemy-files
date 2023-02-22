#include <iostream>
using namespace std;
int main()
{
    int scores[] {100, 90, 45};
    
    cout<<"The value of score is : "<<scores<<endl; //here outputing the scores without array index will print the address of the first element,
    //which is its value
    cout<<endl;
    int *scores_ptr{scores}; //no need to use & as the address of scores is the same as its value 
    cout<<"The value of the score pointer is "<<scores_ptr<<endl;
    cout<<endl;
    
    cout<<"Array subscript notation: "<<endl;
    cout<<scores[0]<<endl;
    cout<<scores[1]<<endl;
    cout<<scores[2]<<endl;
    //here an array name is normally used to display the elements 
    cout<<endl;
    
    cout<<"Pointer subscript notation: "<<endl;
    cout<<scores_ptr[0]<<endl;
    cout<<scores_ptr[1]<<endl;
    cout<<scores_ptr[2]<<endl;
    //since the pointer also stores the same value as the array which is the address, ptr name can be used instead of array name
    cout<<endl;
    
    cout<<"Pointer offset notation: "<<endl;
    cout<<*scores_ptr<<endl; //dereferencing the pointer will lead to the address it is storing, which is the address of the first element of array
    cout<<*(scores_ptr + 1)<<endl; //when one is added to the score ptr, it is not one that is actually added but the size of the data type(here int,4bytes)
    // so adding one to the score ptr within the bracket makes it go to the next elements address
    cout<<*(scores_ptr + 2)<<endl; //scores_ptr + 2 ==> address stored in scores_ptr + 8 bytes(since it is int)...so derefencing this will go the address
    cout<<endl;
    
    cout<<"Array offset notation: "<<endl;
    cout<<*scores<<endl;
    cout<<*(scores + 1)<<endl;
    cout<<*(scores + 2)<<endl;
    //since the value of or the value stored in an array name is the first element's address, dereferencing it will give the value of the first element 
    //and when 1 is added to it, it moves to the next address
    cout<<endl;
    return 0;
}