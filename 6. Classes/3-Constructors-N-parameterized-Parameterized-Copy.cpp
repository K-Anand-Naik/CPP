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
	// Rectangle() //Non-parameterized constructor 
	// {
	// 	length = 1;
	// 	breadth = 1;
	// }
    // Rectangle(int l, int b) // parameterized constructor
	// {
	// 	setLength(l);
    //  setBreadth(b);
	// }
    
    //--->combining both non-parameterized and non-parameterized constructor
    Rectangle(int l=0, int b=0)
    {
        setLength(l);
        setBreadth(b);
    }

    Rectangle(Rectangle &r) // copy constructor
    {
        length = r.length;
        breadth = r.breadth;
    }

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
    // Rectangle r;
    // r.setLength(10);
    // r.setBreadth(5);
    // cout<<"Area of Rectangle: "<<r.area()<<endl;
    // cout<<"Peremeter of Rectangle: "<<r.peremeter()<<endl;
    // cout<<"Length is: "<<r.getLength();
    // Rectangle r1;
    // cout<<r1.area()<<endl; //Non-parameterized constructor

	// Rectangle r2(10,5);
	// cout<<r2.area();  //parameterized constructor

    Rectangle r1(10,5);
    Rectangle r2(r1);
    cout<<r1.area()<<endl; //reference
    cout<<r2.area(); //copy of reference // copy constructor
}

