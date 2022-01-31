#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class base
{
public:
    int x;
    void show()
    {
        cout<<x;
    }
};

class Derived:public base
{
public:
    int y;
    void display()
    {
        cout<<"x="<<x<<";"<<"y="<<y;
    }
};

int main()
{
    base b;
    b.x=25;
    b.show();
    cout<<endl;
    // return 0;

    Derived d;
    d.x=12;
    d.y=5;
    d.show();
    cout<<endl;
    d.display();
}