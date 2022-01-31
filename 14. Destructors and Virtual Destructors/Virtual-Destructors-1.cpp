#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
class Base 
{
public:
    // Base(){cout<<"Base constructor"<<endl;}
    virtual ~Base(){cout<<"Base destructor"<<endl;};
    // // by making virtual we get both base and derived destructors
};
class Derived:public Base
{
public:
    // Derived(){cout<<"Derived constructor"<<endl;}
    ~Derived(){cout<<"Derived destructor"<<endl;}
    
};
// void fun()
// {
//     Derived d;
// }
// int main()
// {
//     fun();// output as below
// //     Base constructor
// // Derived constructor
// // Derived destructor
// // Base destructor
// }

void fun()
{
    Base *p=new Derived();
    delete p;
}
int main()
{
    fun();// base class destructor will be displayed
}

