#include<iostream>
using namespace std;

int maxim(int a, int b) 
{
    return a>b?a:b; // if a greater than b then return a otherwise b
    // this is written using ternary operator
}

float maxim(float a, float b)
{
    return a>b?a:b;
}

int main()
{
    int a;
    float c;

    c=maxim(10.3f,12.3f);
    a=maxim(10,3);
    cout<<c<<endl<<a;
}

