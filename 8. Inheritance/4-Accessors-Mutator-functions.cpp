#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;
public:
    void setLength(int l)
    {
        if(l>0)
            length = l;
        else
            length = l*(-1);
    }
    void setBreadth(int b)
    {
        if(b>0)
            breadth = b;
        else
            breadth = b*(-1);
    }
    int getLength(){return length;}
    int getBreadth(){return breadth;}
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
    Rectangle r1;
    int a,b;
    cout << "Enter the value of length: "<<endl;
    cin>>a;
    cout << "Enter the value of breadth: "<<endl;
    cin>>b;
    cout <<endl;
    r1.setLength(a);
    r1.setBreadth(b);// calling accessor functions

    cout << "Length: "<<r1.getLength()<<endl;
    cout << "Breadth: "<<r1.getBreadth()<<endl;// calling mutator functions

    cout<<"Area: "<<r1.area()<<endl;
    cout<<"Peremeter: "<<r1.peremeter()<<endl;

}