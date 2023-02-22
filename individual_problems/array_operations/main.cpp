#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    int arr[size + 10] {} ;
    
    for(int i {}; i<size; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    
    char choice;
    
    do
    {
        cout<<"Enter the I for insert, D for deletion, L for lookup and E for exit "<<endl;
        cin>>choice;
        if(choice == 'I')
            insertion();
        else if(choice == 'D')
            deletion();
        else if(choice == 'L')
            lookup();
        else
            cout<<"Invalid choice try again"<<endl;
    }while(choice != 'E');
    
    return 0;
}