#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    char firstname[20] {};
    char lastname[20] {};
    char fullname[40] {};
    char full_name[40] {};
    
    cout<<"Enter your first name: ";
    cin>>firstname;
    cout<<"Enter your last name: ";
    cin>>lastname;
    cout<<"--------------------------"<<endl;
    
   cout<<"Your firstname "<<firstname<<" has "<<strlen(firstname)<<" characters."<<endl;
   cout<<"Your lastname "<<lastname<<" has "<<strlen(lastname)<<" characters."<<endl;
   cout<<"--------------------------"<<endl;
   
   strcpy(fullname, firstname);
   strcat(fullname, " ");
   strcat(fullname, lastname);
   cout<<"Your full name is "<<fullname<<endl;
   cout<<"--------------------------"<<endl;
   
//   cout<<"Enter your full name: ";
//   cin.getline(full_name, 50);               //cin cant be use for string input with spaces as the char after space will be lost. hence getline is used 
//   cout<<"Your full name is(getline method) "<<full_name<<endl;
//   cout<<"--------------------------"<<endl;
   
   cout<<"Comparision of first and last name: "<<strcmp(firstname, lastname)<<endl;
   cout<<"--------------------------"<<endl;
   
   for(size_t i{0}; i< strlen(fullname); i++)
   {
       if(isalpha(fullname[i]))
           fullname[i] = toupper(fullname[i]);
   }
   cout<<fullname<<endl;
   cout<<"--------------------------"<<endl;
    return 0;
}