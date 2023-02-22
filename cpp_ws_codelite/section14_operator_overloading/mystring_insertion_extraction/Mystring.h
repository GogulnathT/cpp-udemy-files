#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &is, Mystring &rhs); //here no const since this is input stream and we will change it s
    
  private:
    char *str;  //a pointer to the char[] that is a c - style string
    
public:
    Mystring();                                            //no args constructor
    Mystring(const char *s);                        //overloaded constructor
    Mystring(const Mystring &source);       //copy constructor
    Mystring(Mystring &&source);                //move constructor
    ~Mystring();                                            //destructor
    Mystring &operator=(const Mystring &rhs);  //copy assignment
    
    Mystring &operator=(Mystring &&rhs);        //Move assignment
    
    void display() const;
    int get_length() const;                                     
    const char *get_str() const;                    //getters
};


#endif // _MYSTRING_H_