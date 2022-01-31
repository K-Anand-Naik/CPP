#include<iostream>
#include<cstring>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int add(int x, int y,int z)
{
    return x + y + z;
}

float add(float x, float y)
{
    return x+y;
}

int main()
{
    int a,b,c,d;
    float i=2.4,j=3.4,k;
    cout << "Enter the value of a: ";
    cin>>a;

    cout << "Enter the value of b: ";
    cin>>b;

    c=add(a,b);
    d=add(a,b,c);
    k=add(i,j);
    cout<<c<<endl<<d<<endl<<k;
}