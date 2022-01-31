// there is a concept of VIRTUAL FUNCTION which will
    // the function of Derived class


#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

// class Base
// {
// public:
//     void fun()
//     {
//         cout << "fun of Base!";
//     }
// };
// class Derived:public Base
// {
// public:
//     void fun()
//     {
//         cout << "fun of Derived!";
//     }
// };

class Base
{
public:
    virtual void fun()
    {
        cout << "fun of Base!";
    }
};
class Derived:public Base
{
public:
    virtual void fun()
    {
        cout << "fun of Derived!";
    }
};

int main()
{
    Base *p=new Derived();// but by virtual function like above 
    //we can make output of deerived functions.
    //without virtual function we will get base class function as output
    // Derived *p=new Base(); // which is not possible
    
    p->fun(); // which will display Base class function

    // Derived d;
    // Base *p=&d; // function is called based on pointer not on object
    // p->fun(); // this will display Derived class function
}