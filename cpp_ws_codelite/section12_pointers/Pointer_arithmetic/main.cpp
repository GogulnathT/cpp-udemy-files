#include <iostream>
#include <string>
using namespace std;
int main()
{
    int scores[] {100, 52, 23, 90, -1};
    int *scores_ptr{scores};
    cout<<scores_ptr<<endl;
    cout<<endl;
    while(*scores_ptr != -1)
    {
        cout<<*scores_ptr<<endl;
        scores_ptr++;   //here the incrementing the pointer makes it to point to the next element in the array 
    }
    
    cout<<endl;
    
    scores_ptr = scores;
    while(*scores_ptr != -1)
        cout<<*scores_ptr++<<endl;      //here the pointer is dereferenced and incremented at the same time, since * and ++ have same precedence
    //their associativity is checked, so here the value it points to gets printed and the ptr also gets incremented i.e same as previous while loop
    
    cout<<endl;
    
    string s1{"Gogul"};
    string s2{"Gogul"};
    string s3{"Nitish"};
    
    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};
    
    cout<<boolalpha;
    //comparing the pointer value(not the data they are pointing)
    cout<<(p1 == p2)<<endl;
    cout<<(p1 == p3)<<endl;
    p3 = &s3;
    cout<<endl;
    //comparing the data that the pointer are pointing to
    cout<< (*p1 == *p2)<<endl;
    cout<< (*p2 == *p3) <<endl;
    cout<< (*p3 == *p1) <<endl;
    
    cout<<endl;
    
    char name[] {"Gogul"}; // a char array
    char *cptr1{&name[0]}, *cptr2{&name[3]};
    
    cout<< (cptr2 - cptr1) <<endl;   //subtracting of pointers gives the position by which they are separated
    return 0;
}