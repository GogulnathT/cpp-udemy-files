#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int num{};
    cout<<"Enter the number of data items : ";
    cin>>num;
    cout<<"Enter the data items: "<<endl;
    vector<int> data;
    for(int i{0}; i<num; i++)
    {
        int data_item{};
        cin>>data_item;
        data.push_back(data_item);
    }
    // displaying histogram
    for(int val: data)
    {
        cout<<val<<"    ";
        for(int i{1}; i<=val; i++)
        {
            if(i%5==0)
                cout<<"*";
            else
                cout<<"-";
        }
        cout<<endl;
    }
    return 0;
}