#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    *a += *b;
    *b = *a-*b;
    *a = *a - *b;
}

int main()
{
    int x{10}, y{-33};
    cout<<x<<"\t"<< y<<endl;
    cout<<endl;
    swap(&x, &y);
    cout<<x<<"\t"<< y<<endl;
    return 0;
}