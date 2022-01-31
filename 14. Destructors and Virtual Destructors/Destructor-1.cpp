#include<iostream>
#include<cstring>
using namespace std;

class Demo
{
    int *p;
public:
    Demo()
    {
        p = new int[10];
        cout<<"Constructor of Demo: "<<endl;
    }
    ~Demo()
    {
        delete []p;
        cout<<"Destructor of Demo: "<<endl;
    }
};

void fun() //Global function
{
//    Demo d; 
    Demo *p=new Demo();// dynamically creating an object in heap
    // by which constructor of Demo is printed if you want destructor also
    // you have to write delete p;
    delete p;// then only we get destructor 
}
int main()
{
    fun(); // upon calling this we get both Constructor and destructor outputs
}
