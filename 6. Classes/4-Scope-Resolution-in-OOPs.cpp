#include<iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    //Constructors
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);

    //Mutator --> Usefull to modify the parameters
    void setLength(int l);
    void setBreadth(int b);

    //Accessors --> Usefull to read the properties/variables
    int getLength(); //{return length;}
    int getBreadth();//{return breadth;} // this will become inline function

    //facilitators--> actual functions
    int area();
    int peremeter();

    //enquire function returning boolean, and also can retrun T/F or 1/0
    bool isSquare();

    //Destructor
    ~Rectangle();

// outside the class just use scope resolution operators
// to elaborate those funtions which are written in the class section
//-->implement or define the functions after the main function
};

int main()
{
    Rectangle r1(10,10);
    cout <<"The area of the Rectangle is: "<<r1.area()<<endl;
    if(r1.isSquare())
        cout <<"Yes! it is Square"<<endl;
}

Rectangle::Rectangle()
{
     length = 1;
     breadth = 1;
}
Rectangle::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void Rectangle::setLength(int l)
{
    length = l;
}
void Rectangle::setBreadth(int b)
{
    breadth = b;
}
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::peremeter()
{
    return 2*(length+breadth);
}
bool Rectangle::isSquare()
{
    return length=breadth;
}
Rectangle::~Rectangle()
{
    cout<<"Ops! Rectangle is destroyed:"<<endl;
}//this get displayed at the end of the program


