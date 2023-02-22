#include <iostream>
#include <string>

using namespace std;
int main()
{
   char initial{'T'};
   cout<< "My initial is "<<initial<<endl;
   
   unsigned short exam{55};
   cout<< "Mark is "<<exam<<endl;
   
   long tn_pop(6'79'00'000);
   cout<<"The population of Tamilnadu is "<<tn_pop<<endl;
   
   long long earth_pop {767'35'00'000};
   cout<<"The population of Earth is "<<earth_pop<<endl;
   
   long double dist_earth_andromeda{24000387e19};
   cout<<"The distance between Earth and the Galaxy Andromeda is "<< dist_earth_andromeda<< endl;
   //similar for float and other types  

   string str = "This is awesome";
   cout<<str<<+ "and I am adding this"<<endl;   

    return 0;
}