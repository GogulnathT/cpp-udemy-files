#include <iostream>
using namespace std;

class Shallow{
  private : 
    int *data;
    
  public:
    void set_data_val (int d) { *data = d; }
    int get_data_val () {return *data;}
    
    //constructor
    Shallow(int d);
    //copy constructor
    Shallow (const Shallow &original);
    //destructor
    ~Shallow ();
};

Shallow :: Shallow(int d) {
    data = new int;
    *data = d;
}

Shallow :: Shallow(const Shallow &original) : data(original.data) {
    cout<<"Copy constructor - shallow copy"<<endl;
}

Shallow :: ~Shallow() {
    delete data;
    cout<<"destructor being called "<<endl;
}

void display(Shallow s){  //here a copy object s for obj1 is created 
   cout<< s.get_data_val() <<endl;
} //as the scope of s ends, data gets deallocated but data from obj is also pointing to the same location which is getting deallocated, this will cause
//probs as the memory location becomes invalid once it gets deallocated(through s)


int main() {
    
    Shallow obj1{100};
    display(obj1);
    
    Shallow obj2{obj1};
    obj2.set_data_val(1000);  //here since both obj2 and obj1 point to the same location changing the value in one changes the other also 
    
    //when destructor is called it will cause probs as it tries to deallocate a memory which is already invalid
    
    return 0;
}