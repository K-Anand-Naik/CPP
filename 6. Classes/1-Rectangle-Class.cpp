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

    int perementer()
    {
        return 2*(l+b);
    }
};

int main()
{
    Rectangle r1,r2;
    r1.l=10;
    r1.b=5;
    cout<<"Rectangle 1:"<<endl;
    cout<<"Area 1: "<<r1.area()<<endl;
    cout<<"Peremeter 1: "<<r1.perementer()<<endl;
    
    cout<<endl;

    r2.l=15;
    r2.b=10;
    cout<<"Rectangle 2:"<<endl;
    cout<<"Area 2: "<<r2.area()<<endl;
    cout<<"Peremeter 2: "<<r2.perementer()<<endl;

}
