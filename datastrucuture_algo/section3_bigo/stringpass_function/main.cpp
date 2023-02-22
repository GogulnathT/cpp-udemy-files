#include <iostream>
#include <string>
using namespace std;

int findnemo(string arr[]);

int main()
{
    string array[50] {"Dory","Nemo","Martin"};
    cout<<findnemo(array);
    return 0;
}

int findnemo(string arr[])
{
    int i;
    for(i = 0; i<3; i++)
    {
        if( arr[i] == "Nemo")
        {
            cout<<"Nemo was found !";
            break;
        }
    }
    return i;
}