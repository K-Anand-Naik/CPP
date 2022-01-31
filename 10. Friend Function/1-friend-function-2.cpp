#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class Your;
class My
{
private: int a;    
protected: int b;    
public: int c;  
    friend Your; // a friend class can access private member of my class upon calling by object 
};

class Your
{
public: 
    My m;
    void fun()
    {
        m.a=10;//
        m.b=12;
        m.c=13;
    }
};