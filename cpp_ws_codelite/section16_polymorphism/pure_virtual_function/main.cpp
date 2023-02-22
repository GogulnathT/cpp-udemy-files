#include <iostream>
#include <vector>

using namespace std;

class Shape{  //Abstract base class
private:
    //attributes common to all shapes
public:
    virtual void draw() = 0; //pure virtual function
    virtual void rotate() = 0; //pure virtual func
    virtual ~Shape(){ }
};

class Open_shape : public Shape{ //abstract class
public:
    virtual ~Open_shape() { }
    //since this class also has no implementation of the pure virtual func., it becomes an abstract class
};

class Closed_shape : public Shape {//abstract class
public:
    virtual ~Closed_shape() { }
};

class Line : public Open_shape { //concrete class
public:
    virtual void draw() override{ //here virtual keyword is used but the method can also be implemented without the keyword it will still be virtual
        cout<<"Drawing line"<<endl;
    }
    
    void rotate() override{
        cout<<"Rotating line"<<endl;
    }
    
    virtual ~Line() { } //line destructor is virtual by default even without virtual keyword since the shape destructor is virtual and line is derived from it 
};

class Circle : public Closed_shape { //concrete class
public:
    virtual void draw() override{
        cout<<"Drawing circle"<<endl;
    }
    
    void rotate() override{
        cout<<"Rotating circle"<<endl;
    }
    
    virtual ~Circle() { }
};

class Square : public Closed_shape { //concrete class
public:
    virtual void draw() override{
        cout<<"Drawing square"<<endl;
    }
    
    void rotate() override{
        cout<<"Rotating square"<<endl;
    }
    
    virtual ~Square() { }
};

void screen_refresh(const vector<Shape *> &shapes){
    cout<<"Refresh"<<endl;
    for(const auto p : shapes)
        p->rotate();
}

int main()
{
//    Shape s;
//    Shape *p = new shape();   //this cannot be done as shape is an abstract class which cannot be instantiated; same applies for open and closed shape
    
    Circle c;
    c.draw();
    
    cout<<"\n---------------------------"<<endl;
    Shape *ptr = new Circle();
    ptr->rotate();

    cout<<"\n---------------------------"<<endl;
    Shape *s1 = new Circle();
    Shape*s2 = new Line();
    Shape *s3 = new Square();
    
    vector<Shape *> shapes{s1,s2,s3};
    for(const auto p : shapes)
        p->draw();
    cout<<"\n---------------------------"<<endl;
    
    screen_refresh(shapes);
    cout<<"\n---------------------------"<<endl;
    
    delete s1;
    delete s2;
    delete s3;
    return 0;
}