#include <iostream>
#include <string> 
using namespace std;
int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key{"qwertyuiopasdfghjklzxcvbnmMNBVCXZLKJHGFDSAPOIUYTREWQ"};
    string message{}, encrypted{}, decrypted{};
    cout<<"ENTER MESSAGE TO BE ENCRYPTED: ";
    getline(cin,message);
    cout<<"\n\n";
    for(char c: message)
    {
        size_t posi = alphabet.find(c);
        if(posi!=string::npos)
            encrypted+=key[posi];
        else
            encrypted+=c;
    }
    cout<<"ENCRYPTING MESSAGE.........\n"<<endl;
    cout<<"ENCRYPTED MESSAGE: "<<encrypted<<endl;
     for(char c: encrypted)
    {
        size_t posi = key.find(c);
        if(posi!=string::npos)
            decrypted+=alphabet.at(posi);
        else
            decrypted+=c;
    }
    cout<<"\nDECRYPTING MESSAGE....\n"<<endl;
    cout<<"THE DECRYPTED: "<<decrypted<<endl;
    return 0;
}