#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

int main()
{
    unordered_map<string, int> ourmap;
    ourmap["abc"] = 1;
    ourmap["abc1"] = 2;
    ourmap["abc2"] = 3;
    ourmap["abc3"] = 4;
    ourmap["abc4"] = 5;
    ourmap["abc5"] = 6;
    
    //using iterator to iterate through the map
    unordered_map<string, int>:: iterator it = ourmap.begin();
    for(; it != ourmap.end(); it++)
    {
        cout<<"Key : "<<(*it).first<<" Value : "<<it->second<<endl;
    }
    cout<<endl;
    //find
    unordered_map<string, int>:: iterator itf = ourmap.find("abc");
    cout<< itf->second<<endl<<endl;
    
    
   //erase
   ourmap.erase(itf);
   for(it = ourmap.begin() ; it != ourmap.end(); it++)
    {
        cout<<"Key : "<<(*it).first<<" Value : "<<it->second<<endl;
    }
    
    //using iterator for vector
    cout<<"\nVector : \n";
    vector<int> vec;
    vec.push_back(2);
    vec.push_back(24);
    vec.push_back(7);
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(9);
    
    vector<int>:: iterator it1 = vec.begin();
    
    for(; it1 != vec.end(); it1++)
    {
        cout<<(*it1)<<endl;
    }
    
    
    return 0;
}