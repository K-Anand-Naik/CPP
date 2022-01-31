#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class Rectangle
{
public:
    int l;
    int b;
    int area()
    {
        return l*b;
    }
    int peremeter()
    {
        return 2*(l+b);
    }
};

int main()
{
    // Rectangle r;
    // Rectangle *ptr;
    // ptr=&r;
    Rectangle *ptr = new Rectangle; //dinamic object
    ptr->l=10;
    ptr->b=5;
    cout<<ptr->area()<<endl;
    cout<<ptr->peremeter()<<endl;
}