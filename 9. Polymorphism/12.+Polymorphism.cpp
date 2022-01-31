#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class shape
{
public:
    virtual float area()=0;
    virtual float peremeter()=0;
};

class Rectangle:public shape
{
private:
    float length;
    float breadth;
public:
    Rectangle(int l = 1, int b = 1){length=l; breadth=b;}

    float area(){return length*breadth;}
    float peremeter(){return 2*(length+breadth);}   
};
class circle:public shape
{
private:
    float radius;
public:
    circle(float r){radius=r;}

    float area()
    {
        return 3.1425*radius*radius;
    }
    float peremeter()
    {
        return 6.2831*radius;
    }
};

int main()
{
    int a, b;
    float c;
    cout<<"Enter the value of length: ";
    cin >>a;
    cout<<"Enter the value of breadth: ";
    cin >>b;
    shape *s = new Rectangle(a,b);
    cout<<"Area of Rectangle is: "<<s->area()<<endl;
    cout<<"peremeter of Rectangle is: "<<s->peremeter()<<endl;
    cout<<endl;

    cout<<"Enter the value for radius: ";
    cin>>c;
    s=new circle(c);
    cout<<"Area of circle is: "<<s->area()<<endl;
    cout<<"Peremeter of the circle is: "<<s->peremeter();
}