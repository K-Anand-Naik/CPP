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
    void setLength(int l)
    {
        if(l>=0)
            length = l;
        else
            length = l*(-1);
            // length = 0;
    }
    void setBreadth(int b)
    {
        if(b>=0)
            breadth = b;
        else
            breadth = b*(-1);
            // breadth = 0;
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area() 
    { 
        return length*breadth; 
    }
    int peremeter()
    {
        return 2*(length+breadth); 
    }
};
int main()
{
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<"Area of Rectangle: "<<r.area()<<endl;
    cout<<"Peremeter of Rectangle: "<<r.peremeter()<<endl;
    cout<<"Length is: "<<r.getLength();
}

