#include <iostream>
using namespace std;
int main()
{
    int nums[50] {}, arr[2] {}, target{}, n{};
    cout<<"Enter the no. of elements in the series: ";
    cin>>n;
    cout<<"Enter the series of number: "<<endl;
    for(int i {}; i<n; i++)
        cin>>nums[i];
    cout<<"Enter the target : ";
    cin>>target;
    for(int i{}; i<n; i++)
    {
        for(int j{i+1}; j<=n; j++)
        {
            if(nums[i] + nums[j] == target)
            {
                arr[0] = i;
                arr[1] =j;
            }
        }
    }
    for(int i : arr)
        cout<<i<<endl;
    return 0;
}