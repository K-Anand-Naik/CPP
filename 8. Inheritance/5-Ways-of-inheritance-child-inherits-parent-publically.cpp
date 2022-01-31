#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

class Parent
{
private: int a;
protected: int b;
public: int c;
    void funParent()
    {
        a = 10;
        b = 5;
        c = 12;
    }
};

class Child: public Parent //if we take public, in child class all members
                            // of parent private data can be accessible except 'a' which is private
{
public:
    void funChild()
    {
        //a = 10;// a is private in parent class so it cant be accessible
        b = 5;
        c = 12;
    }
};
class grandChild: public Child
{
public:
    void funGrandChild()
    {
        //a= 10;// this is not owning by the child class,
              // child class inherits from parent class
              //this is not get printed by the granchild class objects
        b = 5;
        c = 12;
    }
};

int main()
{
    Child C;
    // C.a=10;// as child is publically inherits from parent it will throws an error
    // C.b=5; // as child is publically inherits from parent it will throws an error
    C.c=20; // which will not throw any error
}