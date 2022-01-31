#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

class Test
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun();
};
void fun()
{
    Test t;
    t.a=10;// this is not allowed, because a is a private member of Test;
           // without using friend-func
    
    t.b=11;//this is not allowed, because a is a protected member of Test;
           // without using friend-func
    t.c=23; // this is allowed.

    cout<<t.a;
}