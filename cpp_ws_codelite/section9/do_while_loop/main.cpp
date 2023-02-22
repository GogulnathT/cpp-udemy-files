#include <iostream>
using namespace std;
int main()
{
    char sel{};
    do
    {
        cout<<"\n--------------------------------"<<endl;
        cout<<"Enter you selection: \n1 \n2 \n3 \nQuit \n";
        cin>>sel;
        switch (sel) 
        {
            case '1':
                cout<<"You selected one\n"; break;
            case '2':
                cout<<"You selected two\n"; break;
            case '3':
                cout<<"You selected three\n"; break;
            case 'q':
                cout<<"You selected quit"; break;                                   
            case 'Q':                                                                                                      
                cout<<"You selected quit"; break;
            default:
                cout<<"Invalid selection\n";
        }
    } while(sel != 'Q' && sel != 'q');   //here && is used because sel should not be BOTH 'q' or 'Q', logical and is the correct logic
    
    cout<<"\n Goodbye!";
    return 0;
}