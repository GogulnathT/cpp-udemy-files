#include <iostream>

//kmpl - kilometres per litre

using namespace std;

int main()
{
    int km{}, litres{}; 
    double kmpl{};
    
    cout<<"Enter km and litres: ";
    cin>>km>>litres;
    
//    this is using simple if else statement--->
//    if(litres > 0)
//    {
//        kmpl = (double)km/litres;
//        cout<<"The milege is : "<<kmpl<<endl;
//    }
//    else{
//        cerr<<"Litres given is less than or equal to zero, so cannot calculate kmpl"
//        <<endl; //cerr is an output stream(like cout) which is reserved for error messages or error logging
//    }
    
//    using exception handling
        try{ //inside the try block we include code that could potentially cause an exception
            if(litres <= 0)
                throw 0; //throwing the exception(here it is int, it can be anything) here; once an exception is thrown the block gets over and the code after
                //this throw will not be executed; if there is no catch block after the exception is thrown the program will terminate
             
             kmpl = (double)km/litres;
             cout<<"The milege is : "<<kmpl<<endl;
        }
        
        catch(int &ex) { //here we are catching the exception(the integer thrown from the try block);
            cerr<<"Litres given is less than or equal to zero, so cannot calculate kmpl"<<endl;
            //cerr is an output stream(like cout) which is reserved for error messages or error logging
        }
    
    return 0;
    }