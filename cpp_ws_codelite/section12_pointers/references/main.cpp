#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int num {100};
    int &ref{num}; //here ref is a reference to num, ref is similar to a pointer
    
    cout<<num<<endl<<ref<<endl;
    
    cout<<endl;
    
    num = 112;
    cout<<num<<endl<<ref<<endl;
    
    cout<<endl;
    
    ref = 456;
     cout<<num<<endl<<ref<<endl;
     
     cout<<endl;
     
     vector<string> pixar{"Luca", "Coco", "Toy Story"};
     
     for(auto str : pixar)
         str = "Soul"; // since str is copy of the vector elements, changing it here wont change the actual vector elements
        
    for(auto str : pixar)  //no change, prints the original elements
        cout<<str<<"\t"; 
    
    cout<<endl;
    
    for(auto &str : pixar)
        str = "Soul"; //since str is a reference(aka alias) to the vector elements, changing it here also changes the elements
    cout<<endl;
    for(const auto &str : pixar) //using const here wont allow the value to be changed and referencing here will save space as copy is not created
        cout<<str<<"\t";
    cout<<endl;
    return 0;
}