#include <iostream>
#include <vector>
using namespace std;

class Move{
  private : 
    int *data;
    
  public:
    void set_data_val (int d) { *data = d; }
    int get_data_val () {return *data;}
    
    //constructor
    Move(int d);
    //copy constructor
    Move(const Move &original);
    //move constructor
    Move(Move &&source) noexcept ;
    //destructor
    ~Move();
};

Move :: Move(int d) {
    data = new int;
    *data = d;
    cout<<"Constructor for "<<d<<endl;
}

Move :: Move(const Move &original) : Move{*original.data} {
    cout<<"Copy constructor - deep copy for "<<*data<<endl;
}

//move constructor
Move :: Move(Move &&source)noexcept : data{source.data} {
    source.data = nullptr;
    cout<<"Move constructor : moving resource "<<*data<<endl;
}

Move :: ~Move (){
    if(data != nullptr){
        cout<<"Destructor freeing data for "<<*data<<endl;
    }
    else{
        cout<<"Destructor freeing data for nullptr"<<endl;
    }
    delete data;
}

int main()
{
    vector<Move> vec;
    
    vec.push_back(Move{10});  //since it doesnt have a name, it is a temporary object i.e an r value and the temp obj has to be copied into the vector 
    
    vec.push_back(Move{20});
    vec.push_back(Move{30});
    vec.push_back(Move{40});
    vec.push_back(Move{50});
    vec.push_back(Move{60});
    
    return 0;
}