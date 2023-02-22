#include <iostream>
using namespace std;
int main()
{
    int n{};
    int arr[100] {};
    cin>>n;
    cout<<n;
    for(int i{}; i<n && n<=100; i++)
    {
        cin>>arr[i];
    }
    for(int i{}; i<n ; i++)
    {
        cout<<arr[i];
    }
    return 0;
}