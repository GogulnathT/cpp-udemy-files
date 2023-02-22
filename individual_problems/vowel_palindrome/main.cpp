#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t{};
    cin>>t;
    for(int i {}; i<t; i++)
    {
        string s1;
        string vow, revow;
        cin>>s1;
        for(int j{}; j < s1.length(); j++)
        {
            if(s1[j]=='a' || s1[j]=='e' || s1[j]=='i' || s1[j]=='o' || s1[j]=='u' )
                vow += s1[j];
        }
        for(int j{vow.length()-1}; j>=0; j--)
        {
            revow += vow[j];
        }
        if( vow == revow)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
//To check if the func string length is working 
//    string st;
//    getline(cin, st);
//    cout<<st.length()<<endl;
    return 0;
}