#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class base
{
public:
    void fun1()
    {
        cout << "fun1 of Base:"<<endl;
    }   
};
class Derived:public base
{
public:
    void fun2()
    {
        cout << "fun2 of Derived:"<<endl;
    }
};
int main()
{
    Derived d;
    base *p=&d; // base class object pointing to derived class object but not printing them
    p->fun1();
    // p->fun2(); //ERROR: 'class base' has no member named 'fun2'; did you mean 'fun1'?
    //i.e; fun2 is not present in base class

    // base b;
    // Derived *p=&b; //invalid conversion from 'base*' to 'Derived*' [-fpermissive]
    //                 //Derived *p=&b;
    // p->fun1();
    // p->fun2();
    // return 0;
}