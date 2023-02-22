#include <iostream>
using namespace std;
int main()
{
    int *p;
    int score {10};
    cout<< p <<endl;
    cout<< sizeof(p) <<endl;
    cout<< &p<<endl;
    p = nullptr;
    cout<<p<<endl;
    p = &score;
    double mark {100.2};
    double *ptr;
    ptr = &mark;
    cout<<"SIze of int pointer "<<sizeof(p)<<endl;
    cout<<"Size of double pointer"<<sizeof(ptr)<<endl;  //this shows that the pointer size is same irrespective of the address it holds
    // ptr = &score; doing this will cause error since it is of diff data type
    return 0;
}