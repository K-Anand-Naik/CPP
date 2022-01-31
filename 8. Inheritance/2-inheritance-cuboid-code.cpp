#include<iostream>
#include<cstring>
#include<cmath>
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
    int getLength(){return length;}
    int getBreadth(){return breadth;} // this will become inline function

    //facilitators--> actual functions
    int area();
    int peremeter();

    //enquire function returning boolean, and also can retrun T/F or 1/0
    bool isSquare();

    //Destructor
    ~Rectangle();
};

class cuboid:public Rectangle
{
private:
    int height;
public:
    cuboid(int h)
    {
        height = h;
    }
    int getHeight(){return height;};
    void setHeight(int h){height = h;};
    int volume()
    {
        return getLength() * getBreadth() * height;
    }
    int peremeter()
    {
        return 2*(getLength()*getBreadth() + height*getBreadth() + height*getLength());
    }
};

int main()
{
    int q,w,e;
    cout<<"Enter the height value: ";
    cin>>q;
    cout<<"Enter the length value: ";
    cin>>w;
    cout<<"Enter the breadth value: ";
    cin>>e;
    cuboid c(q);
    c.setLength(w);
    c.setBreadth(e);
    cout<<"Volume is: "<<c.volume()<<endl;
    cout<<"Peremeter is: "<<c.peremeter()<<endl;
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
