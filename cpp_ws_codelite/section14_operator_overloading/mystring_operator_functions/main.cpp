#include <iostream>
#include "Mystring.h"

using namespace std;

int main()
{
    cout<<boolalpha;
    
    Mystring tgn{"Gogul"};
    Mystring ptron{"Pavi"};
    
    Mystring Pavitran = ptron;
    tgn.display();
    ptron.display();
    
    cout<<(tgn==ptron)<<endl;
    cout<<(Pavitran == ptron)<<endl;
    
    tgn.display();
    Mystring tgn1 = -tgn;
    tgn1.display();
    
    Mystring join = tgn + "nath";
                            //"nath" + tgn will cause compile error
    join.display();
    
    Mystring join2 = tgn + " " + ptron;
    join2.display();
    
    Mystring alljoin = tgn + ptron + Pavitran;
    alljoin.display();
    return 0;
}