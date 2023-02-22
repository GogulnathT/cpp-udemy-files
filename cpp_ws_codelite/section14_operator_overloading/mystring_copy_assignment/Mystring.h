#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring{
  private:
    char *str;  //a pointer to the char[] that is a c - style string
    
public:
    Mystring();                                            //no args constructor
    Mystring(const char *s);                        //overloaded constructor
    Mystring(const Mystring &source);       //copy constructor
    ~Mystring();                                            //destructor
    
    
    Mystring &operator=(const Mystring &rhs);  //copy assignment, here the lhs of assignment is this object and rhs is the righthand side obj; this is
    //assignment and not construction so the object on the left should exist eg. s1 = s2, s1 is lhs and s2 is rhs and this is the same as s1.operator=(s2);
    
    void display() const;
    int get_length() const;                                     
    const char *get_str() const;                    //getters
};


#endif // _MYSTRING_H_