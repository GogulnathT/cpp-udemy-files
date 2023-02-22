#include <iostream>
#include <cstdlib> //required for rand()
#include <ctime> //required for time() 

using namespace std;

int main()
{
    int random_num{};
    int count{10}; //no. of random numbers to be generated
    const int max{6};
    const int min{1};
    
    //seeding the random generator is needed as the computer will have same sequence of random numbers
    //so to get actual random numbers we should seed it 
    cout<<"RAND_MAX on my system is "<<RAND_MAX<<endl; //this gives the max value in the series of random numbers stored in the computer
    
    srand(time(nullptr)); //here the random number is seeded using the system time as it keeps changing using the time() function and nullptr(null pointer) which is 0
    
    for(int i{0}; i<count; i++)
    {
        random_num = rand()%max + min; //here rand() is used for random num but %by max and adding of min is done to get random num bet 1 and 6
        cout<<random_num<<endl;
    }
    return 0;
}