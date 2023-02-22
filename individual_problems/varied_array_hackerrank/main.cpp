#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//incomplete 


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n{}, q{};
    cin>>n>>q;
    vector <vector<int>> nums;
    for(int i{}; i<n; i++)
    {
        int first{};
        cin>> first;
        for(int j{}; j<first; j++ )
            cin>>nums [i][j];
    }
    for(int i{}; i<q; i++)
    {
        int first{}, second{};
        cin>>first>>second;
        cout<<nums[first][second]<<endl;
    }
    return 0;
}
