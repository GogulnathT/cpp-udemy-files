/*
 
    1st iteration...this actually works but the problem is if the 
    same characters are given then the test case 
    is failed this problem is addressed in the corrected code where
    a normal loop is used instead of a range based one.

 
  */
//#include <iostream>
//#include <string>
//using namespace std;
//int main()
//{
//    string s1{};
//    cout<<"Enter the string for pattern: ";
//    getline(cin, s1);
//    size_t l = s1.length(); 
//    for(char c: s1)
//    {
//        string pat{};
//        for(size_t i{}; i<=(s1.find(c)); i++)
//        {
//            //cout<<s1.at(i);
//            pat+= s1.at(i);
//        }
//        for(int  j{s1.find(c)-1}; j>=0; j--)
//        {
//            //cout<<s1.at(j);
//            pat+= s1.at(j);
//        }
//        for(size_t i{l-1}; i>0; i--)
//            cout<<" ";
//        l--;
//        cout<<pat;
//        cout<<endl;
//    }
//    return 0;
//}

// 2nd iteration
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1{};
    cout<<"Enter the string for pattern: ";
    getline(cin, s1);
    size_t l = s1.length(); 
    for(int k{0}; k<s1.length(); k++)
    {
        string pat{};
        for(int i{}; i<=k; i++)
        {
            pat+= s1.at(i);
        }
        for(int  j{(k)-1}; j>=0; j--)
        {
            pat+= s1.at(j);
        }
        for(int i{l-1}; i>0; i--)
            cout<<" ";
        l--;
        cout<<pat;
        cout<<endl;
    }
    return 0;
}