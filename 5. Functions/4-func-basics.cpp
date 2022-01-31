//sum of integers

#include<iostream>
#include<cstring>
using namespace std;

int add(int x,int y) //prototype or header of a function or signature of function
{
    int z;
    z=x+y;
    return z;
}

int mul(int x,int y)
{
    int m;
    m=x*y;
    return m;
}

int dev(int x,int y)
{
    int d;
    d=x/y;
    return d;
}

int sub(int x,int y)
{
    int v;
    v=x-y;
    return v;

}

int sqr(int x)
{
    int q;
    q=x*x;
    return q;
}
 
int main()
{
    int a,b;
    int c=0;
    int n;
    int d;
    int s;
    int r;
    cout<<"Enter the value of a: ";
    cin >> a;

    cout<<"Enter the value of b: "; 
    cin >> b;

    cout<<"Enter the value for square: "; 
    cin>>r;

    c=add(a,b);
    n=mul(a,b);
    d=dev(a,b);
    s=sub(a,b);
    r=sqr(r);


    cout<<"The sum of "<< a <<" and "<< b <<" is: "<< c <<endl;
    cout<<"The mul of "<< a <<" and "<< b <<" is: "<< n <<endl;
    cout<<"The div of "<< a <<" and "<< b <<" is: "<< d <<endl;
    cout<<"The sub of "<< a <<" and "<< b <<" is: "<< s <<endl;
    cout<<"The square of a is: "<<r;
}
