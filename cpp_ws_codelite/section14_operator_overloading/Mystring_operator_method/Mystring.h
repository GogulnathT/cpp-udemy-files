#ifndef _MYSTRING_H_
#define _MYSTRING_H_


class Mystring{
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
    
    
    Mystring operator-() const;                        //method for - operator; since it is unary there are no arguments passed and here we are doing pass by value
                                                                        //this method converts to lower
    Mystring operator+(const Mystring &rhs) const; //method for + binary operator; it concatenates 
    bool operator==(const Mystring &rhs) const;   //method for == operator; check if they are equal
    
    
    void display() const;
    int get_length() const;                                     
    const char *get_str() const;                    //getters
};


#endif // _MYSTRING_H_