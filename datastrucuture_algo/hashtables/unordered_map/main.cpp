#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> ourmap;
    
    //insert into hashmap
    pair<string , int> p{"abc", 4};
    ourmap.insert(p); //this is one way of inserting
    ourmap["gogul"] = 6; //another way
    
    //find or access value in hashmap
    cout<<ourmap["abc"]<<endl;  //similar to array syntax but instead of index we put the key 
    cout<<ourmap.at("gogul")<<endl; //built in function to access/output value
    //it is better to use the .at() method as it is more accurate. the square bracket method adds a key if it is not present and initializes its value to 0
    cout<<ourmap["ghi"]<<endl; //even though "ghi" is not present it gets added to it and its value is 0
    
    //inbuilt func to find no. of elements 
    cout<<"size : "<<ourmap.size()<<endl; 
    
    //the count function used to see if a key is there or not 
    if(ourmap.count("abc")>0)  
        cout<<"\"abc\" key is present"<<endl;
        
    //delete or erase an element from the hashmap
    ourmap.erase("ghi");
    cout<<"size : "<<ourmap.size()<<endl;
    
    
    
    
    return 0;
}