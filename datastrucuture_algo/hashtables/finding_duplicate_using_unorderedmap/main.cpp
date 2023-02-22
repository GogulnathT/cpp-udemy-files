#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> remove_duplicate(int arr[], int n);

int main()
{
    int a[] {4,1,2,5,8,9,5,5,5,6,9,5,6,4,5,5,1,2,2,3,9,8,9};
    int size {23};
    vector<int> without_dupe = remove_duplicate(a, size);
    cout<<"original array : ";
    for(auto x : a)
        cout<<x<<" ";
    cout<<"\n array without duplicate : ";
    for(auto x : without_dupe)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}

vector<int> remove_duplicate(int arr[], int n)
{
    unordered_map<int , bool> seen;
    vector<int> output;
    for(int i {}; i < n; i++)
    {
        if(seen.count(arr[i]) > 0)
            continue;
        else
        {
            seen[arr[i]] = true;
            output.push_back(arr[i]);
        }
    }
    return output;
}