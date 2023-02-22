#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int num{10};
    cout<<"Value of num : "<<num<<endl;
    cout<<"Size of num: "<<sizeof(num)<<endl;
    cout<<"Address of num : "<<&num<<endl;
    
    cout<<endl;
    
    int *p;   //integer pointer with garbage value since it is uninitialized
     cout<<"Value of pointer : "<<p<<endl;
    cout<<"Size of pointer: "<<sizeof(p)<<endl;
    cout<<"Address of pointer : "<<&p<<endl;
    p = nullptr; //initialising to nullptr 
    cout<<"Value of pointer : "<<p<<endl;
    
    cout<<endl;
    
    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string>  *p4{nullptr};
    string *p5{nullptr};
    
    cout<<"Size of p1 : "<<sizeof p1<<endl;
    cout<<"Size of p2 : "<<sizeof p2<<endl;
    cout<<"Size of p3 : "<<sizeof p3<<endl;
    cout<<"Size of p4 : "<<sizeof p4<<endl;
    cout<<"Size of p5 : "<<sizeof p5<<endl;
    
    cout<<endl;
    
    int score{201};
    int *score_ptr{nullptr};
    
    score_ptr = &score;
    cout<<"Value of score : "<<score<<endl;
    cout<<"Address of score: "<<&score<<endl;
    cout<<"Value of score_ptr: "<<score_ptr<<endl;
    
    return 0;
}