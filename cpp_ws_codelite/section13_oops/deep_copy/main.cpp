#include <iostream>
using namespace std;

class Deep{
  private : 
    int *data;
    
  public:
    void set_data_val (int d) { *data = d; }
    int get_data_val () {return *data;}
    
    //constructor
    Deep(int d);
    //copy constructor
    Deep (const Deep &original);
    //destructor
    ~Deep ();
};

Deep :: Deep(int d) {
    data = new int;
    *data = d;
}

//deep copying
Deep :: Deep(const Deep &original) : Deep{*original.data} { //here we are not just copying the ptr but also the data it is pointing to into a new location
    cout<<"Copy constructor - deep copy"<<endl;                     //so now the program wont crash
}

Deep :: ~Deep() {
    delete data;
    cout<<"destructor being called "<<endl;
}

void display(Deep d){  //here a copy object s for obj1 is created 
   cout<< d.get_data_val() <<endl;
} 


int main() {
    
    Deep obj1{100};
    display(obj1);
    
    Deep obj2{obj1};
    obj2.set_data_val(1000);  
    display(obj2);
    
    return 0;
}