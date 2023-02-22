#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring{
    friend bool operator==(const Mystring &lhs, const Mystring &rhs);
    friend Mystring operator-(const Mystring &obj);
    friend Mystring operator+(const Mystring &lhs, const Mystring &rhs); 
    //here we are declaring them as friend functions because they are non member functions and the need access to the private members of the class
    //to perform the function of the overloaded operator
    
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