#include<iostream>
using namespace std;

void swap(int a, int b) 
{
    cout<<a<<" "<<b<<endl; // a and b are local variables
    int temp;
    temp = a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;

    // a and b are formal parameters, so they get changed 
    // in the pass by value method. i.e, they get modified but
    // actual parameters will not get changed.(x and y) 
}

int main() 
{
    int x=20,y=10; // x and y are actual variables.
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    // here actual parameters x and y will not get changed
}